@interface PLSharedStreamsDataStoreKey : PLResourceDataStoreKey
- (id)fileURLForAssetID:;
- (id)keyData;
- (id)validateForAssetID:resourceIdentity:;
- (id)uniformTypeIdentifier;
- (unsigned int)resourceVersion;
- (unsigned int)resourceType;
- (BOOL)isDerivative;
- (id)descriptionForAssetID:;
- (id)initWithKeyStruct:;
- (void).cxx_destruct;
- (unsigned int)recipeIDForAssetID:;
- (BOOL)isEqual:;
- (BOOL)isEqualToKey:;
- (id)initWithAsset:album:type:;
+ (id)_replacementPathExtensionForType:;
+ (id)_relativeFilePathForPersonID:albumID:fileName:;
+ (id)_relativeDCIMFilePathForPersonID:albumID:dcimDirectory:fileName:;
+ (id)_keyDataWithRelativePath:type:;
+ (unsigned long long)dataLengthFromPreviewByte:;
@end
