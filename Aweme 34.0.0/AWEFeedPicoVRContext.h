@interface AWEFeedPicoVRContext : NSObject
@property (nonatomic) NSString referString;
@property (nonatomic) AWEFeedPicoVRViewController controller;
@property (nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> playerViewController;
@property (nonatomic) AWEAwemeModel model;
- (id)referString;
- (void)setReferString:;
- (void)setModel:;
- (void)setController:;
- (id)model;
- (void).cxx_destruct;
- (id)controller;
- (id)playerViewController;
- (void)setPlayerViewController:;
- (id)initWithPlayerController:;
@end
