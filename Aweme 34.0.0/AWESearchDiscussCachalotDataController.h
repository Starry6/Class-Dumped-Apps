@interface AWESearchDiscussCachalotDataController : AWESearchVerticalDataController
@property (nonatomic) NSString lastKeyword;
@property (nonatomic) AWESearchDiscussTabModel selectedTab;
@property (nonatomic) BOOL isTabSwitching;
- (long long)requestDataCount;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (void)refreshResponse:;
- (void)loadMoreResponse:;
- (void)setLastKeyword:;
- (id)lastKeyword;
- (id)discussRequestParams;
- (void)setIsTabSwitching:;
- (BOOL)isTabSwitching;
- (void).cxx_destruct;
- (id)selectedTab;
- (void)setSelectedTab:;
- (void)updateWith:;
@end
