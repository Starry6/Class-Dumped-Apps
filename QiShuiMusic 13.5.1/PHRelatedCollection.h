@interface PHRelatedCollection : PHAssetCollection
@property (nonatomic) NSArray debugInfo;
@property (nonatomic) PHObject relatedObject;
@property (nonatomic) NSString highlightLocalIdentifier;
@property (nonatomic) NSArray momentLocalIdentifiers;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q relationType;
- (id)debugInfo;
- (id)localizedSubtitle;
- (BOOL)canPerformEditOperation:;
- (void).cxx_destruct;
- (id)subtitle;
- (long long)titleCategory;
- (id)initTransientWithAssets:orFetchResult:relationType:relatedObject:title:subtitle:titleCategory:highlightLocalIdentifier:momentLocalIdentifiers:debugInfo:;
- (unsigned long long)relationType;
- (id)relatedObject;
- (id)highlightLocalIdentifier;
- (id)momentLocalIdentifiers;
+ (id)_relatedCollectionsFromInfos:relatedObject:photoLibrary:;
+ (id)transientCollectionListWithCollectionsRelatedToObject:relationType:options:;
+ (id)transientCollectionListWithCollectionsRelatedToPersons:relationType:options:;
+ (id)_transientCollectionListWithCollectionsRelatedToLocalIdentifiers:relationType:options:photoLibrary:;
@end
