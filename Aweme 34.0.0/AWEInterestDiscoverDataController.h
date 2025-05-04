@interface AWEInterestDiscoverDataController : AWEListDataController
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSString interestIDString;
@property (nonatomic) NSString interestNameString;
@property (nonatomic) NSString fromGIDString;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)loadPreviousWithCompletion:;
- (void)fetchWithCount:type:completion:;
- (id)interestIDString;
- (id)fromGIDString;
- (id)interestNameString;
- (void)setInterestIDString:;
- (void)setInterestNameString:;
- (void)setFromGIDString:;
- (id)init;
- (void)setOffset:;
- (id)offset;
- (void)resetData;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
@end
