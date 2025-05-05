@interface MSVDistributedNotificationObserver : NSObject
@property (nonatomic) NSString distributedName;
@property (nonatomic) NSString localName;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <MSVDistributedNotificationObserverDelegate> delegate;
@property (nonatomic) NSDictionary userInfoForLocalNotification;
- (id)init;
- (void)dealloc;
- (int)notifyToken;
- (id)localName;
- (void)setDelegate:;
- (void)setUserInfoForLocalNotification:;
- (void)_handleDistributedNotificationWithNotifyToken:;
- (id)userInfoForLocalNotification;
- (id)distributedName;
- (id)delegate;
- (void).cxx_destruct;
- (id)queue;
- (id)initWithDistributedName:localName:queue:;
+ (id)observerWithDistributedName:localName:queue:;
@end
