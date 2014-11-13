////////////////////////////////////////////////
// File:	BaseComputeDevice.h
//
// Author:	Liam Russell (A.K.A. BitSlapper)
//
// Copyright: 2014-2015 Liam Russell
//
// License:	GNU GENERAL PUBLIC LICENSE V3
//////////////////////////////////////////////

#ifndef _BASECOMPUTEDEVICE_H_
#define _BASECOMPUTEDEVICE_H_

#include <string>
#include "../base/IPrototype.h"

class BaseComputeDevice : public IPrototype
{

protected:

	unsigned int m_unVendorID;
	std::string m_szName;
	std::string m_szVendorName;
	std::string m_szAlgorithm;

public:

	///////////////////////////////////////////////////////////////////////////////
	//Constructor
	///////////////////////////////////////////////////////////////////////////////
	BaseComputeDevice();

	///////////////////////////////////////////////////////////////////////////////
	//Copy Constructor
	///////////////////////////////////////////////////////////////////////////////
	BaseComputeDevice(const BaseComputeDevice& device);

	///////////////////////////////////////////////////////////////////////////////
	//Assignment Operator
	///////////////////////////////////////////////////////////////////////////////
	BaseComputeDevice& operator=(const BaseComputeDevice& device);

	///////////////////////////////////////////////////////////////////////////////
	//Destructor
	///////////////////////////////////////////////////////////////////////////////
	~BaseComputeDevice();

	BaseComputeDevice* Clone();
	BaseComputeDevice* DeepCopy();

	///////////////////////////////////////////////////////////////////////////////
	//Accessors
	///////////////////////////////////////////////////////////////////////////////
	const unsigned int	GetVendorID()	const						{	return this->m_unVendorID;				}
	const std::string&	GetVendorName() const						{	return this->m_szVendorName;			}
	const std::string&	GetName()		const						{	return this->m_szName;					}
	const std::string&	GetAlgorithm()	const						{	return this->m_szAlgorithm;				}

	///////////////////////////////////////////////////////////////////////////////
	//Mutators
	///////////////////////////////////////////////////////////////////////////////
	void SetVendorID(const unsigned int unVendorID)					{	this->m_unVendorID = unVendorID;		}
	void SetVendorName(const std::string& szVendorName)				{	this->m_szVendorName = szVendorName;	}
	void SetName(const std::string& szName)							{	this->m_szName = szName;				}
	void SetAlgorithm(const std::string& szAlgorithm)				{	this->m_szAlgorithm = szAlgorithm;		}

};


#endif //_BASECOMPUTEDEVICE_H_
