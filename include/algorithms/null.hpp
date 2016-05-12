#ifndef PAGMO_ALGORITHMS_NULL_HPP
#define PAGMO_ALGORITHMS_NULL_HPP

#include "../algorithm.hpp"
#include "../detail/population_fwd.hpp"

namespace pagmo
{

class null_algorithm
{
    public:
        null():m_a(42.1) {}
        population evolve(const population& pop) const {
            return pop;
        };

        const double& get_a() const
        {
            return m_a;
        }

        template <typename Archive>
        void serialize(Archive &ar)
        {
            ar(m_a);
        }
    private:
        double m_a;
};

} //namespaces

PAGMO_REGISTER_ALGORITHM(pagmo::algorithms::null);

#endif
