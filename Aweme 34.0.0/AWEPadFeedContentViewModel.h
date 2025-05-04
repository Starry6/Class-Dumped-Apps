@interface AWEPadFeedContentViewModel : NSObject
@property (nonatomic) NSString sourcePath;
@property (nonatomic) q awemeType;
@property (nonatomic) q tabType;
@property (nonatomic) AWEPadFeedChannelDataController dataController;
@property (nonatomic) AWEPadChannelTracker tracker;
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol><AWEFeedTableViewControllerProtocol> contentViewController;
- (long long)awemeType;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setDataController:;
- (long long)tabType;
- (void)setAwemeType:;
- (void)setTabType:;
- (id)initWithSourcePath:awemeType:padTabType:enterFrom:;
- (id)sourcePath;
- (id)tracker;
- (void)setSourcePath:;
- (void)setTracker:;
- (void).cxx_destruct;
- (void)setContentViewController:;
- (void)refreshWithCompletion:;
- (id)contentViewController;
- (id)dataController;
@end
