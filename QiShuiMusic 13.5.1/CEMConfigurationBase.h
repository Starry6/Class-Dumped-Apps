@interface CEMConfigurationBase : CEMDeclarationBase
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (id)synthesizeProfileOutUUIDs:withOldUUIDs:assetProviders:;
- (id)payloadUUIDWithIdentifier:outUUIDs:oldUUIDs:;
- (id)synthesizeProfilePayloadOutUUIDs:withOldUUIDs:assetProviders:;
- (id)profilePayloadsByTypeWithAssetProviders:;
+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)declarationClass;
@end
