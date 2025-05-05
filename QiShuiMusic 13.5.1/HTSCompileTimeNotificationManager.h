@interface HTSCompileTimeNotificationManager : NSObject
@property (nonatomic) NSMutableDictionary subscribers;
- (void)loadCompileNotifications;
- (void)handleNotification:;
- (id)init;
- (void).cxx_destruct;
- (id)subscribers;
- (void)setSubscribers:;
+ (id)sharedManager;
@end
