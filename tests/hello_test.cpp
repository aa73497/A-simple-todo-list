#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"

TEST_CASE("Add task") {
    TodoList list;
    REQUIRE(list.add("Sow beet seeds") == true);
}

TEST_CASE("Complete a task in the list") {
    TodoList list;
    list.add("Sow beet seeds");
    REQUIRE(list.complete("Sow beet seeds") == true);
}
TEST_CASE("Complete a non existent task") {
    TodoList list;
    REQUIRE(list.complete("Sow beet seeds") == false);
}
TEST_CASE("Clears all tasks") {
    TodoList list;
    list.add("Sow beet seeds");
    list.add("Buy eggs");
    list.clear();
    REQUIRE(list.complete("Sow beet seeds") == false);
    REQUIRE(list.complete("Buy eggs") == false);
}


