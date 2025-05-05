@interface VSRemoteNotifier : NSObject
@property (nonatomic) NSString notificationObject;
@property (nonatomic) NSDistributedNotificationCenter distributedNotificationCenter;
@property (nonatomic) NSString remoteNotificationName;
@property (nonatomic) <VSRemoteNotifierDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)distributedNotificationCenter;
- (void)setNotificationObject:;
- (id)remoteNotificationName;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithNotificationName:;
- (void)postNotification;
- (id)notificationObject;
- (void)postNotificationWithUserInfo:;
- (void)setDistributedNotificationCenter:;
- (void)_didReceiveDistributedNotification:;
+ (id)_currentProcessIdentifier;
@end
