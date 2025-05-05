@interface PLCollectionSearchResult : PLSearchResult
@property (nonatomic) PSICollectionResult collectionResult;
@property (nonatomic) Q libraryScope;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSDate sortDate;
@property (nonatomic) PSIDate startDate;
@property (nonatomic) PSIDate endDate;
@property (nonatomic) Q collectionType;
- (id)startDate;
- (id)uuid;
- (unsigned long long)collectionType;
- (id)sortDate;
- (id)endDate;
- (unsigned long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (id)collectionResult;
- (unsigned long long)assetCount;
- (unsigned long long)libraryScope;
- (void)setLibraryScope:;
- (id)keyAssetUUID;
- (id)initWithGroupResult:collectionResult:libraryScope:;
@end
