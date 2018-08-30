#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
#include <eosiolib/action.hpp>
#include <tuple>


namespace icerde
{
    using namespace eosio;

    class icerde : public contract
    {
    public:
        icerde(account_name self) : contract(self){}
        //@abi action
        void siz(account_name self)
        {
            action(
            permission_level{_self , N(active)},
            N(ana),              
            N(bastir),
            std::make_tuple()
            ).send();
        }
    };
    EOSIO_ABI(icerde , (siz));

}