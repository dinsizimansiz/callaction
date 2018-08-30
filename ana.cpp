#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
#include <eosiolib/action.hpp>
#include <string>


namespace icerde
{
    using namespace eosio;

    class ana : public contract
    {
    public:
        ana(account_name self) : contract(self){}
        //@abi action
        void bastir(account_name self)
        {
            print(self);
        }

    };
    EOSIO_ABI(ana , (bastir));
}