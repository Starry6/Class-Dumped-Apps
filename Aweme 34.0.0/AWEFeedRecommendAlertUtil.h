@interface AWEFeedRecommendAlertUtil : NSObject
@property (nonatomic) BOOL showing;
- (BOOL)canShow;
- (void)setColdLaunch:;
- (BOOL)coldLaunch;
- (void)onPersonalRecommendChanged:;
- (void)appEnterForground;
- (void)openSucceed;
- (void)openFailed;
- (id)init;
- (void)close;
- (void)didDismiss;
- (void)didShow;
- (BOOL)showing;
- (void)setShowing:;
+ (id)noticeSettings;
+ (id)sharedInstance;
@end
