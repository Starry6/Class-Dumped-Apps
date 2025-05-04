@interface AWEFeedLiveTabBaseComponent : NSObject
@property (nonatomic) @ componentInfo;
@property (nonatomic) NSString tag;
@property (nonatomic) NSDictionary landingParams;
@property (nonatomic) FeedLiveTabData liveTabData;
- (void)setLandingParams:;
- (id)landingParams;
- (void)updateComponentWith:;
- (void)bindService;
- (id)liveTabData;
- (void)setLiveTabData:;
- (void)becomeActive;
- (id)tag;
- (void)setTag:;
- (id)contentView;
- (void).cxx_destruct;
- (id)componentInfo;
- (void)setComponentInfo:;
- (void)becomeInactive;
@end
