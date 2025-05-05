@interface AWEIMShareTipsManager : NSObject
@property (nonatomic) NSString latestSessionID;
@property (nonatomic) NSMutableDictionary sessionDict;
- (id)latestSessionID;
- (void)cancelDelayDismiss;
- (void)dismissNotificationBar;
- (void)setLatestSessionID:;
- (void)showTips:;
- (void)showTips:shareModels:;
- (id)init;
- (void).cxx_destruct;
- (id)sessionDict;
- (void)setSessionDict:;
+ (id)sharedInstance;
@end
