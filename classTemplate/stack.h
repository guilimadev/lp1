#include <iostream>


namespace sc {

	template < typename T >
	class stack
	{
	private:
		size_t topo; // primeira posição livre
		size_t capacity; // tamanho atual da area de armazenamento
		T *data; //area de armazenamento

		void double_array( T * &AA, size_t & sz )
            {
                // (1) alocar
                T * Aux = new T[ sz * 2 ];

                // (2) copiar o conteudo antigo para a area nova.
                for( auto i(0u) ; i < sz ; ++i )
                    Aux[i] = AA[i];
                //AA[i] = T();

                // (3) liberar a memoria antiga.
                delete [] AA;

                // (4) reatribuir a meoria para o ponteiro original.
                AA = Aux;

                // (5) dobrar o tamanho.
                sz *= 2;
            }

	public:
		stack(size_t cp=1) : topo{0}, capacity{cp}, data{new T[cp]}
		{ /* empty */ }

		~stack(){
			delete [] data;
		}

		bool empty( void ) const{
			return topo == 0;
		}

		T top( void ) const{
			if(empty() ){
				throw std::out_of_range ("Pilha vazia!");
			}

			return data[topo-1];
		}

		void pop (void) {
			if(empty() ){
				throw std::out_of_range ("Pilha vazia!");
			}

			topo--;
		}

		void push(const T& value){
			//Dobrar sempre que chegar ao limite atual
			if(topo == capacity){
				double_array(data, capacity);
				std::cout << "Dobrando tamanho" << std::endl;
			}

			data[topo++] = value;
		}
		
	};
}