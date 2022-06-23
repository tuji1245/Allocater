#include <memory>

class Allocater
{
public:
	// 初期のメモリ量で確保
	Allocater();
	// 確保メモリの開放
	~Allocater();

	// 要素の確保を行う
	// 戻り値: 作成したインスタンスを返す。
	template<class T>
	T* Alloc();
private:
	static const int _poolSize = 1000;
	void* _memoryPool;
};

template<class T>
inline T* Allocater::Alloc()
{
	T* instance = new(_memoryPool) T();
	
	return instance;
}
