#include <memory>

class Allocater
{
public:
	// �����̃������ʂŊm��
	Allocater();
	// �m�ۃ������̊J��
	~Allocater();

	// �v�f�̊m�ۂ��s��
	// �߂�l: �쐬�����C���X�^���X��Ԃ��B
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
