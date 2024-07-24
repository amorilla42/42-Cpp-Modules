#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain &copy);
        virtual ~Brain();
        
        Brain &operator=(const Brain &copy);

        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea);
};

#endif