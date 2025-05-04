@interface AWEFeedPicoVRManager : NSObject
@property (nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> playerViewController;
@property (nonatomic) NSMutableDictionary itemIDVRConfigDict;
- (id)itemIDVRConfigDict;
- (void)setItemIDVRConfigDict:;
- (void).cxx_destruct;
- (id)playerViewController;
- (void)setPlayerViewController:;
+ (id)generateVRConfigDictKeyByPlayer:;
+ (id)sharedInstance;
@end
