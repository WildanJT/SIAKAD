#include <iostream>
#include <vector>

#include "include/matkul.hpp"


mataKuliah::mataKuliah(int id, std::string matkul) : id(id), namaMatkul(matkul)
{
}

int mataKuliah::getId()
{
	return this->id;
}

void mataKuliah::setId(int id)
{
	this->id = id;
}

std::string mataKuliah::getMatkul()
{
	return this->namaMatkul;
}

void mataKuliah::setdataDosen(ListDosen inputdata)
{
	this-> dataDosen.push_back(inputdata);
}

std::vector<ListDosen> mataKuliah::getdataDosen()
{
    return this->dataDosen;
}

void mataKuliah::setdataMhs(ListMhs inputdata)
{
	this-> dataMhs.push_back(inputdata);
}

std::vector<ListMhs> mataKuliah::getdataMhs()
{
    return this->dataMhs;
}