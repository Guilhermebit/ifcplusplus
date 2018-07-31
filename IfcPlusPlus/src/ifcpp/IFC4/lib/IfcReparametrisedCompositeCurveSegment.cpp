/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcCompositeCurve.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcReparametrisedCompositeCurveSegment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcTransitionCode.h"

// ENTITY IfcReparametrisedCompositeCurveSegment 
IfcReparametrisedCompositeCurveSegment::IfcReparametrisedCompositeCurveSegment() {}
IfcReparametrisedCompositeCurveSegment::IfcReparametrisedCompositeCurveSegment( int id ) { m_entity_id = id; }
IfcReparametrisedCompositeCurveSegment::~IfcReparametrisedCompositeCurveSegment() {}
shared_ptr<BuildingObject> IfcReparametrisedCompositeCurveSegment::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcReparametrisedCompositeCurveSegment> copy_self( new IfcReparametrisedCompositeCurveSegment() );
	if( m_Transition ) { copy_self->m_Transition = dynamic_pointer_cast<IfcTransitionCode>( m_Transition->getDeepCopy(options) ); }
	if( m_SameSense ) { copy_self->m_SameSense = dynamic_pointer_cast<IfcBoolean>( m_SameSense->getDeepCopy(options) ); }
	if( m_ParentCurve ) { copy_self->m_ParentCurve = dynamic_pointer_cast<IfcCurve>( m_ParentCurve->getDeepCopy(options) ); }
	if( m_ParamLength ) { copy_self->m_ParamLength = dynamic_pointer_cast<IfcParameterValue>( m_ParamLength->getDeepCopy(options) ); }
	return copy_self;
}
void IfcReparametrisedCompositeCurveSegment::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCREPARAMETRISEDCOMPOSITECURVESEGMENT" << "(";
	if( m_Transition ) { m_Transition->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SameSense ) { m_SameSense->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ParentCurve ) { stream << "#" << m_ParentCurve->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ParamLength ) { m_ParamLength->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcReparametrisedCompositeCurveSegment::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcReparametrisedCompositeCurveSegment::toString() const { return L"IfcReparametrisedCompositeCurveSegment"; }
void IfcReparametrisedCompositeCurveSegment::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcReparametrisedCompositeCurveSegment, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Transition = IfcTransitionCode::createObjectFromSTEP( args[0], map );
	m_SameSense = IfcBoolean::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_ParentCurve, map );
	m_ParamLength = IfcParameterValue::createObjectFromSTEP( args[3], map );
}
void IfcReparametrisedCompositeCurveSegment::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes )
{
	IfcCompositeCurveSegment::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "ParamLength", m_ParamLength ) );
}
void IfcReparametrisedCompositeCurveSegment::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse )
{
	IfcCompositeCurveSegment::getAttributesInverse( vec_attributes_inverse );
}
void IfcReparametrisedCompositeCurveSegment::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCompositeCurveSegment::setInverseCounterparts( ptr_self_entity );
}
void IfcReparametrisedCompositeCurveSegment::unlinkFromInverseCounterparts()
{
	IfcCompositeCurveSegment::unlinkFromInverseCounterparts();
}
