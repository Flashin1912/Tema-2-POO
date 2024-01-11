#include <stdio.h>
#include "Inamic.h"
#include "mic.h"
#include "mediu.h"
#include "mare.h"

int main()
{
Mic m(30);
Mediu med(5);
Mare M(40);
m.vorbeste();
med.vorbeste();
M.vorbeste();
std::cout << ((Inamic)m).getViata();
try{med.takeDmg(5);}catch(eroareViata v){v.what();}
std::unique_ptr <Mic> m2(new Mic(35));
m2->vorbeste();

return 0;
}