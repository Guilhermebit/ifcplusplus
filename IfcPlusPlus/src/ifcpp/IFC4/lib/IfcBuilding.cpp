/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBuilding.h"
#include "ifcpp/IFC4/include/IfcElementCompositionEnum.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPostalAddress.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelContainedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelServicesBuildings.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcBuilding 
IfcBuilding::IfcBuilding() {}
IfcBuilding::IfcBuilding( int id ) { m_entity_id = id; }
IfcBuilding::~IfcBuilding() {}
shared_ptr<BuildingObject> IfcBuilding::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBuilding> copy_self( new IfcBuilding() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createBase64Uuid<wchar_t>().data() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy(options) ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy(options) ); }
	if( m_LongName ) { copy_self->m_LongName = dynamic_pointer_cast<IfcLabel>( m_LongName->getDeepCopy(options) ); }
	if( m_CompositionType ) { copy_self->m_CompositionType = dynamic_pointer_cast<IfcElementCompositionEnum>( m_CompositionType->getDeepCopy(options) ); }
	if( m_ElevationOfRefHeight ) { copy_self->m_ElevationOfRefHeight = dynamic_pointer_cast<IfcLengthMeasure>( m_ElevationOfRefHeight->getDeepCopy(options) ); }
	if( m_ElevationOfTerrain ) { copy_self->m_ElevationOfTerrain = dynamic_pointer_cast<IfcLengthMeasure>( m_ElevationOfTerrain->getDeepCopy(options) ); }
	if( m_BuildingAddress ) { copy_self->m_BuildingAddress = dynamic_pointer_cast<IfcPostalAddress>( m_BuildingAddress->getDeepCopy(options) ); }
	return copy_self;
}
void IfcBuilding::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCBUILDING" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_LongName ) { m_LongName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CompositionType ) { m_CompositionType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ElevationOfRefHeight ) { m_ElevationOfRefHeight->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ElevationOfTerrain ) { m_ElevationOfTerrain->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_BuildingAddress ) { stream << "#" << m_BuildingAddress->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcBuilding::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcBuilding::toString() const { return L"IfcBuilding"; }
void IfcBuilding::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 12 ){ std::stringstream err; err << "Wrong parameter count for entity IfcBuilding, expecting 12, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	m_LongName = IfcLabel::createObjectFromSTEP( args[7], map );
	m_CompositionType = IfcElementCompositionEnum::createObjectFromSTEP( args[8], map );
	m_ElevationOfRefHeight = IfcLengthMeasure::createObjectFromSTEP( args[9], map );
	m_ElevationOfTerrain = IfcLengthMeasure::createObjectFromSTEP( args[10], map );
	readEntityReference( args[11], m_BuildingAddress, map );
}
void IfcBuilding::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcSpatialStructureElement::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "ElevationOfRefHeight", m_ElevationOfRefHeight ) );
	vec_attributes.push_back( std::make_pair( "ElevationOfTerrain", m_ElevationOfTerrain ) );
	vec_attributes.push_back( std::make_pair( "BuildingAddress", m_BuildingAddress ) );
}
void IfcBuilding::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcSpatialStructureElement::getAttributesInverse( vec_attributes_inverse );
}
void IfcBuilding::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSpatialStructureElement::setInverseCounterparts( ptr_self_entity );
}
void IfcBuilding::unlinkFromInverseCounterparts()
{
	IfcSpatialStructureElement::unlinkFromInverseCounterparts();
}
