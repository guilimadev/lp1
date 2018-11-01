#include <iostream>


namespace sc {

	template < typename T >
	class stack
	{
	private:

		struct Node
		{
			T data;
			NOde *next;
			Node( const T& d = T(), Node *n=nullptr)
				: data(d), next(n)
				{/* empty */}			
		};

		Node *tail; // primeira posição livre
		size_t count; // tamanho atual da area de armazenamento
		Node *head; //area de armazenamento

		
	public:
		stack(size_t cp=1) 
		{ 
			head = new Node;
			tail = head;
			count = 0;
		}

		~stack(){
			clear(); //Apagar os nós com informação da listas
			delete data; // Apagar o head
		}

		void clear(void){
			Node *target = head;
			Node *current = head->next;

			while(current != nullptr){
				target = current;
				current = current->next;

				delete target;
			}

			head->next = nullptr;
			tail = head;
		}

		bool empty( void ) const{
			return tail == head;
		}

		T top( void ) const{
			if(empty() ){
				throw std::out_of_range ("Pilha vazia!");
			}

			return tail->data;
		}

		void pop (void) {
			if(empty() ){
				throw std::out_of_range ("Pilha vazia!");
			}

			//Caminha do inicio até antes do tail atual
			Node *target = tail;

			tail = head;
			while(tail->next != target){
				tail = tail->next;
			}

			topo->next = nullptr;
			delete target;
			count--;
		}

		void push(const T& value){
			
			tail->next = new Node (value);
			topo = topo->next;
			
			count++;
		}
		
	};
}