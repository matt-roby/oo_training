target_include_directories(
    zoo
    PRIVATE
        .
)

target_sources(
    zoo
    PRIVATE
        Animal.h
        Bird.h
        Chicken.h
        Fish.h
        Flyable.h
        Sparrow.h
)
