@interface AWESearchUserPostDataController : AWEListDataController
@property (nonatomic) AWESearchUserPostDataResponse response;
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) NSDictionary refreshParams;
@property (nonatomic) NSDictionary loadMoreParams;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
- (id)secUserID;
- (void)setSecUserID:;
- (void)loadMoreWithCompletion:;
- (void)calculateFilteredDataSource;
- (id)commonParams;
- (id)refreshParams;
- (id)loadMoreParams;
- (id)userID;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)refreshWithCompletion:;
- (id)url;
- (void)setUserID:;
@end
