@interface AWEFeedChannelRefreshModel : AWEFeedChannelTrackBaseModel
@property (nonatomic) BOOL isCallByFrame;
@property (nonatomic) q refreshType;
@property (nonatomic) NSString refreshMethod;
@property (nonatomic) BOOL topTabRefreshAnimation;
@property (nonatomic) BOOL bottomTabRefreshAnimation;
@property (nonatomic) NSString refreshChannel;
- (void)setRefreshMethod:;
- (void)setTopTabRefreshAnimation:;
- (id)refreshMethod;
- (id)refreshChannel;
- (void)setBottomTabRefreshAnimation:;
- (BOOL)topTabRefreshAnimation;
- (BOOL)bottomTabRefreshAnimation;
- (void)setRefreshChannel:;
- (BOOL)isCallByFrame;
- (void)setIsCallByFrame:;
- (id)description;
- (void).cxx_destruct;
- (void)setRefreshType:;
- (long long)refreshType;
@end
