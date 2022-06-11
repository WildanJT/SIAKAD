#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__


#include <iostream>
#include <vector>

struct ListDosen
{
	std::string nama;
	std::string departemen;
};

struct ListMhs
{
	std::string nama;
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
};

class mataKuliah {
	private:
		int id;
		std::string namaMatkul;
		std::vector<ListDosen> dataDosen;
		std::vector<ListMhs> dataMhs;

	public:
		mataKuliah(int id, std::string matkul);

		void setId(int id);
		int getId();

		std::string getMatkul();

		void setdataDosen(ListDosen inputdata);
		std::vector<ListDosen> getdataDosen(); 

		void setdataMhs(ListMhs inputdata);
		std::vector<ListMhs> getdataMhs();
};

#endif