@interface AWEFeedPlayerPreloadManager : NSObject
@property (nonatomic) <IESVideoPlayerProtocol> player;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> videoController;
@property (nonatomic) BOOL isFirstTimeAppDidBecomeActive;
- (void)createFirstPlayerWithModel:;
- (id)videoControllerWithModel:;
- (BOOL)isFirstTimeAppDidBecomeActive;
- (void)setIsFirstTimeAppDidBecomeActive:;
- (void)setModel:;
- (id)player;
- (id)model;
- (void)setPlayer:;
- (void).cxx_destruct;
- (id)videoController;
- (void)setVideoController:;
- (void)clean;
+ (id)sharedInstance;
@end
