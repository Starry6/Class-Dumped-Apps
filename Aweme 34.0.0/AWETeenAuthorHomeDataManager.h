@interface AWETeenAuthorHomeDataManager : AWEListDataController
@property (nonatomic) q cursor;
@property (nonatomic) AWEUserModel user;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)p_reportAwemeVideoNotTeen:;
- (void)loadAuthorWorkCompletion:;
- (void)loadAuthorProfileCompletion:;
- (long long)cursor;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
@end
