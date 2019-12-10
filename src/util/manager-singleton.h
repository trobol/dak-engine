#include "singleton.h"
namespace dak
{
    namespace util
    {
        template <typename T>
        class ManagerSingleton : Singleton<T> {
            public:
                void startUp();
                void shutDown();
        };
    } // namespace util
    
} // namespace dak