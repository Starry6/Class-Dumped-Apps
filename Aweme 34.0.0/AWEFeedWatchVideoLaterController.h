@interface AWEFeedWatchVideoLaterController : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didAddToWatchLater:;
- (void)didRemoveWatchLater:;
- (void)onWatchVideoLaterChangeNotification:;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
@end
