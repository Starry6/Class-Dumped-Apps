@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey
@property (nonatomic) {PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1=b8b2b2b5b4b15b1b2b8} keyStruct;
- (id)fileURLForAssetID:;
- (id)keyData;
- (id)validateForAssetID:resourceIdentity:;
- (id)uniformTypeIdentifier;
- (void)setKeyStruct:;
- (unsigned int)resourceVersion;
- (unsigned int)resourceType;
- (BOOL)isDerivative;
- (id)initWithFilePath:resourceVersion:resourceType:recipeID:bundleScope:pathManager:;
- (id)initFromExistingLocationOfExternalResource:asset:;
- (id)initWithKeyStruct:;
- (unsigned int)recipeIDForAssetID:;
- (id)keyStruct;
+ (id)_fileURLFromKeyStruct:assetID:;
+ (id)fileURLForPayloadKeyData:assetID:;
+ (unsigned short)keyLengthWithDataPreview:;
@end
