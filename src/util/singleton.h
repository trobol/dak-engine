#ifndef DAK_UTIL_SINGLETON
#define DAK_UTIL_SINGLETON
namespace dak
{
namespace util
{
template <typename T>
class Singleton
{
protected:
	Singleton() {}
	static T s_instance;

public:
	Singleton(const Singleton &) = delete;
	Singleton &operator=(const Singleton) = delete;
	Singleton(Singleton &&) = delete;
	Singleton &operator=(Singleton &&) = delete;

	static T &instance()
	{
		return s_instance;
	}
};
template <typename T>
T Singleton<T>::s_instance;

} // namespace util
} // namespace dak

#endif