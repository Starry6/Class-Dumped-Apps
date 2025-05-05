@interface PLResourceDataStoreKey : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fileURLForAssetID:;
- (id)keyData;
- (id)validateForAssetID:resourceIdentity:;
- (id)uniformTypeIdentifier;
- (id)descriptionForAssetID:;
- (id)initWithKeyStruct:;
- (BOOL)isEqualToKey:;
+ (BOOL)refreshSandboxExtensionForURL:assetID:error:;
+ (BOOL)refreshSandboxExtensionForURL:libraryID:assetUUID:error:;
@end
