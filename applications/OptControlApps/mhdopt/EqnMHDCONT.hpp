#ifndef __mgsolvermhdcont0_h__
#define __mgsolvermhdcont0_h__

//C++ includes
#include <vector>

// Local Includes
#include "SystemTwo.hpp"


namespace femus {
  
// Forwarded classes
class NumericVector;

class EqnMHDCONT : public SystemTwo {

  public:
    
   
EqnMHDCONT(  std::vector<Quantity*> int_map_in,
	     MultiLevelProblemTwo& mg_equations_map_in,
                   std::string eqname_in="Eqn_MHDCONT");

  ~EqnMHDCONT();

  void elem_bc_read(const double el_xm[],int& surf_id, double value[],int el_flag[]) const {};
  
  void GenMatRhs(const uint Level);

};



} //end namespace femus


#endif
