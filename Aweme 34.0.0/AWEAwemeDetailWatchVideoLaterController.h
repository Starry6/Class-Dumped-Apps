@interface AWEAwemeDetailWatchVideoLaterController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didAddToWatchLater:;
- (void)didRemoveWatchLater:;
- (void)onWatchVideoLaterChangeNotification:;
- (void)dealloc;
- (void)viewDidLoad;
@end
