namespace dak {
    namespace util {
        template <typename T>
        class Singleton {
            private:
                Singleton();
            public:
                Singleton(const Singleton&) = delete;
                Singleton& operator=(const Singleton) = delete;
                Singleton(Singleton&&) = delete;
                Singleton& operator=(Singleton&&) = delete;

                static T& instance() {
                    static T instance;
                    return instance;
                }
        };
    }
}