//
// Created by Chris on 10/6/2020.
//

#include <Person.h>
#include "gtest/gtest.h"

TEST(ProductoPerecederoTestSuite, CheckToString){
ProductoPerecedero producto;

producto.setNombre("Manzana");
producto.setCantidad(2);
producto.setPrecio(800);

EXPECT_EQ(producto.toString(),"-- Producto perecedero --\nNombre: Manzana\nCantidad: 2\nPrecio: 800\n\n");
}