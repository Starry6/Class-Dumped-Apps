@interface MPMediaRemoteEntityTranslator : MPBaseEntityTranslator
- (id)identifiersForContentItem:;
- (id)objectForPropertySet:contentItem:context:;
- (id)sectionObjectForPropertySet:contentItem:context:;
- (void)mapIdentifierCreationBlock:;
- (void)mapPropertyKey:toMPContentItemSelector:;
- (void)mapArtworkPropertyKey:;
- (void)mapPropertyKey:toUserInfoKey:;
- (void)mapPropertyKey:toDeviceSpecificUserInfoKey:;
- (void)mapPropertyKey:toValueTransformer:;
- (void)mapRelationshipKey:toModelClass:;
+ (void)buildSchemaIfNeeded;
@end
