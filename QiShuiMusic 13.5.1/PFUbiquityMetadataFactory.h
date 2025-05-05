@interface PFUbiquityMetadataFactory : NSObject
- (id)init;
- (void)dealloc;
- (id)description;
- (id)createMetadataModel;
- (id)newEntityForName:;
- (id)newAttributeNamed:attributeType:isOptional:isTransient:withDefaultValue:andMinValue:andMaxValue:;
- (id)newRelationshipNamed:withDestinationEntity:andInverseRelationship:isOptional:isToMany:andDeleteRule:;
- (void)addModelingToolUserInfoToProperty:;
- (void)addModelingToolUserInfoToEntity:;
+ (void)_invalidateStaticCaches;
@end
