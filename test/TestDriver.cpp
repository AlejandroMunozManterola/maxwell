#include "gtest/gtest.h"

#include "SquareResonantCavity2D.h"

#include <fstream>

class TestDriver: public ::testing::Test {
};

TEST_F(TestDriver, SquareResonantCavity2D) {

	// Posibilidades: las guardo aqu� por ahora. Pero voy a tomar la OPCION 3.
	// --> Opcion 1: Comprobaci�n iterativa: Caculo en todos los tiempos y que salte FALSE si en uno no se cumple?
	// --> Opcion 2: Guarda todo: Guardo el campo en un vector con su tiempo y luego lo recorro?
	// --> Opcion 3: Solo un tiempo: Guardo el campo en un vector a tiempo final, total, se arrastra el error.
	// 
	// Medir la Condici�n Inicial del test. 

	// Calcular la evoluci�n temporal mediante MFEM usando la Condici�n Inicial del test.

	// Medir la evoluci�n temporal mediante la funci�n anal�tica.


	// Calcular el error mediante L2. 
	// Soluci�n del test ejemplo: EXPECT_NEAR(error, 0.0, 1e-8);
}