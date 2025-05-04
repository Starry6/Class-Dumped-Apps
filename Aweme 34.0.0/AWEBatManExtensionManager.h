@interface AWEBatManExtensionManager : NSObject
@property (nonatomic) <AWEBatManAlertTrackerDelegate> trackerDelegate;
- (void)setTrackerDelegate:;
- (id)trackerDelegate;
- (void)registerTrackerDelegate:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
