@interface BDUGLocationLocServiceFetcher_Private : NSObject
@property (nonatomic) BOOL locServiceEnabled;
- (BOOL)locServiceEnabled;
- (void)onReceivedWillEnterForegroundNotification:;
- (void)setLocServiceEnabled:;
- (id)init;
- (void)dealloc;
+ (id)sharedInstance;
@end
