@interface AWEAnchorAdditionListModel : AWEBaseApiModel
@property (nonatomic) NSArray cellModels;
@property (nonatomic) NSString schema;
@property (nonatomic) q sectionType;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL searchHasMore;
- (void)setCellModels:;
- (id)cellModels;
- (BOOL)searchHasMore;
- (void)setSearchHasMore:;
- (id)schema;
- (void)setSchema:;
- (void)setHasMore:;
- (long long)sectionType;
- (BOOL)hasMore;
- (void)setSectionType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)cellModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
