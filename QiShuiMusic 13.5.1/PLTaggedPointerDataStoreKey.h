@interface PLTaggedPointerDataStoreKey : PLTaggedPointer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fileURLForAssetID:;
- (id)keyData;
- (id)_heapAllocatedRepresentationInLibraryWithID:;
- (id)validateForAssetID:resourceIdentity:;
- (id)uniformTypeIdentifier;
- (unsigned int)resourceVersion;
- (unsigned int)resourceType;
- (BOOL)isDerivative;
- (id)descriptionForAssetID:;
- (id)initWithKeyStruct:;
- (unsigned int)recipeIDForAssetID:;
- (void)tableType:index:;
- (BOOL)representsSquareResource;
- (BOOL)isEqual:;
- (BOOL)isEqualToKey:;
+ (id)keyWithKeyStruct:keyLength:forStoreClassID:inLibraryWithID:;
@end
