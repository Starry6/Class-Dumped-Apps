@interface PHAssetCollectionReference : PHCollectionReference
@property (nonatomic) NSArray transientAssetReferences;
@property (nonatomic) q assetCollectionType;
@property (nonatomic) q assetCollectionSubtype;
- (long long)assetCollectionType;
- (void).cxx_destruct;
- (BOOL)transient;
- (long long)assetCollectionSubtype;
- (id)initWithDictionary:referenceType:;
- (id)dictionaryForReferenceType:;
- (id)_transientCollectionInLibrary:;
- (id)initWithLocalIdentifier:libraryURL:type:subtype:assetReferences:transientIdentifier:transientTitle:;
- (id)initWithLocalIdentifier:libraryURL:type:subtype:;
- (id)transientAssetReferences;
+ (id)representedType;
+ (id)referenceForAssetCollection:;
@end
