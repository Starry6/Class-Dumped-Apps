@interface MPStorePlatformEntityTranslator : MPBaseEntityTranslator
- (id)identifiersForPayload:context:;
- (void)mapRelationshipKey:toModelClass:payloadTransform:;
- (void)mapPropertyKey:toPayloadKeyPaths:valueTransformerFunction:;
- (void)mapPropertyKey:toPayloadKeyPath:;
- (void)mapPropertyKey:toPayloadKeyPaths:valueTransformer:;
- (id)objectForPropertySet:payload:context:;
- (void)mapIdentifierCreationKeyPaths:transformBlock:;
- (id)prepareSource:context:properties:;
+ (id)translatorForKind:;
+ (void)buildSchemaIfNeeded;
@end
