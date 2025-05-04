@interface AWEPadPolymericInnerFeedDataController : AWEListDataController
@property (nonatomic) NSString pageKey;
@property (nonatomic) NSString sectionId;
@property (nonatomic) q offset;
@property (nonatomic) NSMutableSet deduplicationSet;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)pageKey;
- (void)setPageKey:;
- (id)appendAwemeModels:;
- (id)deduplicationSet;
- (void)setDeduplicationSet:;
- (id)initWithPageKey:sectionId:awemeModels:;
- (void)fetchFeedSectionDataWithOffset:count:completion:;
- (void)setOffset:;
- (long long)offset;
- (id)sectionId;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setSectionId:;
- (void)setDataOffset:;
@end
