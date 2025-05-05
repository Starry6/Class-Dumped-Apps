@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey
- (id)fileURLForAssetID:;
- (id)keyData;
- (id)uniformTypeIdentifier;
- (id)initFromExistingLocationOfExternalResource:asset:;
- (id)initWithKeyStruct:;
- (void).cxx_destruct;
- (id)initWithResourceType:;
- (id)fileURLForAssetID:inContext:;
+ (id)fileURLForPayloadKeyData:assetID:;
+ (unsigned short)keyLengthWithDataPreview:;
@end
