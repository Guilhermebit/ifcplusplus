/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcDistanceExpression.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcSectionedSolidHorizontal.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcSectionedSolidHorizontal 
IfcSectionedSolidHorizontal::IfcSectionedSolidHorizontal() {}
IfcSectionedSolidHorizontal::IfcSectionedSolidHorizontal( int id ) { m_entity_id = id; }
IfcSectionedSolidHorizontal::~IfcSectionedSolidHorizontal() {}
shared_ptr<BuildingObject> IfcSectionedSolidHorizontal::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcSectionedSolidHorizontal> copy_self( new IfcSectionedSolidHorizontal() );
	if( m_Directrix ) { copy_self->m_Directrix = dynamic_pointer_cast<IfcCurve>( m_Directrix->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_CrossSections.size(); ++ii )
	{
		auto item_ii = m_CrossSections[ii];
		if( item_ii )
		{
			copy_self->m_CrossSections.push_back( dynamic_pointer_cast<IfcProfileDef>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_CrossSectionPositions.size(); ++ii )
	{
		auto item_ii = m_CrossSectionPositions[ii];
		if( item_ii )
		{
			copy_self->m_CrossSectionPositions.push_back( dynamic_pointer_cast<IfcDistanceExpression>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_FixedAxisVertical ) { copy_self->m_FixedAxisVertical = dynamic_pointer_cast<IfcBoolean>( m_FixedAxisVertical->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSectionedSolidHorizontal::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSECTIONEDSOLIDHORIZONTAL" << "(";
	if( m_Directrix ) { stream << "#" << m_Directrix->m_entity_id; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_CrossSections );
	stream << ",";
	writeEntityList( stream, m_CrossSectionPositions );
	stream << ",";
	if( m_FixedAxisVertical ) { m_FixedAxisVertical->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSectionedSolidHorizontal::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSectionedSolidHorizontal::toString() const { return L"IfcSectionedSolidHorizontal"; }
void IfcSectionedSolidHorizontal::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSectionedSolidHorizontal, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReference( args[0], m_Directrix, map );
	readEntityReferenceList( args[1], m_CrossSections, map );
	readEntityReferenceList( args[2], m_CrossSectionPositions, map );
	m_FixedAxisVertical = IfcBoolean::createObjectFromSTEP( args[3], map );
}
void IfcSectionedSolidHorizontal::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcSectionedSolid::getAttributes( vec_attributes );
	if( m_CrossSectionPositions.size() > 0 )
	{
		shared_ptr<AttributeObjectVector> CrossSectionPositions_vec_object( new AttributeObjectVector() );
		std::copy( m_CrossSectionPositions.begin(), m_CrossSectionPositions.end(), std::back_inserter( CrossSectionPositions_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "CrossSectionPositions", CrossSectionPositions_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "FixedAxisVertical", m_FixedAxisVertical ) );
}
void IfcSectionedSolidHorizontal::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcSectionedSolid::getAttributesInverse( vec_attributes_inverse );
}
void IfcSectionedSolidHorizontal::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcSectionedSolid::setInverseCounterparts( ptr_self_entity );
}
void IfcSectionedSolidHorizontal::unlinkFromInverseCounterparts()
{
	IfcSectionedSolid::unlinkFromInverseCounterparts();
}
