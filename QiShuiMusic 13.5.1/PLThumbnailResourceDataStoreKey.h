@interface PLThumbnailResourceDataStoreKey : NSObject
@property (nonatomic) {PLThumbnailDataStoreKeyStruct_V1=b2b3b1b27} keyStruct;
@property (nonatomic) I tableType;
@property (nonatomic) NSInteger index;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned int)tableType;
- (id)fileURLForAssetID:;
- (id)keyData;
- (id)validateForAssetID:resourceIdentity:;
- (id)uniformTypeIdentifier;
- (void)setKeyStruct:;
- (unsigned int)resourceVersion;
- (unsigned int)resourceType;
- (BOOL)isDerivative;
- (int)index;
- (id)descriptionForAssetID:;
- (id)initWithKeyStruct:;
- (void)tableType:index:;
- (id)keyStruct;
- (BOOL)representsSquareResource;
- (BOOL)isEqual:;
- (BOOL)isEqualToKey:;
+ (id)fileURLForPayloadKeyData:assetID:;
+ (unsigned int)recipeIDForTableType:inStore:;
+ (BOOL)representsSquareResourceForPayloadKeyData:;
@end
