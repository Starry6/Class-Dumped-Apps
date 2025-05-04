@interface AWEVideoHallDataController : AWEBaseDataController
@property (nonatomic) AWEVideoHallRequestModel model;
@property (nonatomic) NSString scene;
- (void)fetchWithCompletion:isOnFeedShare:fetchType:;
- (void)refreshWithCompletion:isOnFeedShare:;
- (void)loadmoreWithCompletion:isOnFeedShare:;
- (void)setModel:;
- (void)setScene:;
- (id)scene;
- (id)model;
- (void).cxx_destruct;
+ (void)getVideoHallEntranceStatus:;
+ (void)addVideoHallEntranceWithIsNewVersion:completion:;
+ (void)getMovieTicketCouponWithCouponScene:couponToken:completion:;
+ (void)loadAwemeModelWithAlbumId:completion:;
+ (void)loadAwemeModelWithAwemeId:completion:;
@end
