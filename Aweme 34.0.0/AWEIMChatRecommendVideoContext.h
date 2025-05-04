@interface AWEIMChatRecommendVideoContext : AWEIMComponentContext
@property (nonatomic) NSString toUserSecID;
@property (nonatomic) NSString toUserID;
@property (nonatomic) NSNumber convShortID;
@property (nonatomic) NSArray videos;
- (id)toUserID;
- (void)setToUserID:;
- (void)setConvShortID:;
- (void)setToUserSecID:;
- (id)toUserSecID;
- (id)convShortID;
- (void).cxx_destruct;
- (id)videos;
- (void)setVideos:;
@end
