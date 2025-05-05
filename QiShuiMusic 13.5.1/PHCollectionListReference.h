@interface PHCollectionListReference : PHCollectionReference
@property (nonatomic) NSArray transientCollectionReferences;
@property (nonatomic) q collectionListType;
@property (nonatomic) q collectionListSubtype;
- (long long)collectionListType;
- (long long)collectionListSubtype;
- (void).cxx_destruct;
- (BOOL)transient;
- (id)initWithDictionary:referenceType:;
- (id)dictionaryForReferenceType:;
- (id)_transientCollectionInLibrary:;
- (id)initWithLocalIdentifier:libraryURL:collectionListType:collectionListSubtype:collectionReferences:transientIdentifier:transientTitle:;
- (id)initWithLocalIdentifier:libraryURL:collectionListType:collectionListSubtype:;
- (id)transientCollectionReferences;
+ (id)representedType;
+ (id)referenceForCollectionList:;
@end
