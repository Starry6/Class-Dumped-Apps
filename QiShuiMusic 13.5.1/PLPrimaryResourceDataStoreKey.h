@interface PLPrimaryResourceDataStoreKey : PLResourceDataStoreKey
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fileURLForAssetID:;
- (id)keyData;
- (id)validateForAssetID:resourceIdentity:;
- (id)uniformTypeIdentifier;
- (id)initFromExistingLocationOfExternalResource:asset:;
- (id)descriptionForAssetID:;
- (id)initWithKeyStruct:;
- (id)_init;
- (BOOL)isEqual:;
- (BOOL)isEqualToKey:;
- (id)_initFromExistingLocationOfExternalResource:asset:;
- (id)_initWithKeyStruct:;
+ (id)fileURLForPayloadKeyData:assetID:;
+ (unsigned short)keyLengthWithDataPreview:;
+ (unsigned int)strategyFromExternalResource:asset:;
@end
