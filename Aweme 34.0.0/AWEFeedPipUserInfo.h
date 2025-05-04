@interface AWEFeedPipUserInfo : NSObject
@property (nonatomic) AWEAwemeBaseViewController<AWEFeedTableViewCellViewControllerProtocol> feedVC;
@property (nonatomic) @? playLoadingAnimationHandler;
@property (nonatomic) @? stopLoadingAnimationHandler;
- (id)feedVC;
- (id)playLoadingAnimationHandler;
- (id)stopLoadingAnimationHandler;
- (void)setPlayLoadingAnimationHandler:;
- (void)setStopLoadingAnimationHandler:;
- (void)setFeedVC:;
- (void).cxx_destruct;
@end
