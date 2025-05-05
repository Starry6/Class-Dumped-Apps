@interface PLPrimaryResourceDataStoreFilePathKey : PLPrimaryResourceDataStoreKey
@property (nonatomic) {PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1=b8b2b3} keyStruct;
@property (nonatomic) NSString filePathSuffix;
- (id)fileURLForAssetID:;
- (id)keyData;
- (id)validateForAssetID:resourceIdentity:;
- (id)uniformTypeIdentifier;
- (void)setKeyStruct:;
- (id)extension;
- (id)initFromExistingLocationOfExternalResource:asset:;
- (id)descriptionForAssetID:;
- (id)initWithKeyStruct:;
- (void).cxx_destruct;
- (id)keyStruct;
- (id)initWithFilePath:andLibraryID:;
- (id)filePathSuffix;
- (void)setFilePathSuffix:;
+ (id)fileURLForPayloadKeyData:assetID:;
+ (unsigned short)keyLengthWithDataPreview:;
@end
