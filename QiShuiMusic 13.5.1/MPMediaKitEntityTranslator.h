@interface MPMediaKitEntityTranslator : MPBaseEntityTranslator
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifiersForPayload:context:;
- (void)mapPropertyKey:toPayloadKeyPaths:valueTransformerFunction:;
- (void)mapRelationshipKey:toModelClass:mediaKitType:;
- (void)mapPropertyKey:toPayloadKeyPath:;
- (void)mapPropertyKey:toPayloadKeyPaths:valueTransformer:;
- (id)objectForPropertySet:payload:context:;
- (void)mapIdentifierCreationKeyPaths:transformBlock:;
- (void)mapRelationshipKey:toModelClass:mediaKitType:attributePayloadTransform:;
- (void)mapRelationshipKey:toModelClass:mediaKitType:payloadTransform:;
+ (id)createGenericObjectTranslator;
+ (void)buildSchemaIfNeeded;
+ (id)translatorForType:;
+ (id)createTranslatorForMPModelClass:;
@end
