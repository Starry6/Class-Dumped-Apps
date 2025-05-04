@interface AWEMVWatchLaterController : AWEDCFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindObserver;
- (void)didAddToWatchLater:;
- (void)didRemoveWatchLater:;
- (void)onWatchVideoLaterChangeNotification:;
- (void)dealloc;
- (void)containerViewDidLoad;
@end
