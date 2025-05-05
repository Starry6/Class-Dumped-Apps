@interface QLNotificationCenter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)postNotificationName:userInfo:;
- (void).cxx_destruct;
- (void)unregisterObserver:;
- (void)registerObserver:;
- (long long)_indexOfObserver:;
- (BOOL)_tryPostingNotificationName:userInfo:;
- (void)_bufferNotificationName:userInfo:;
- (void)setRemoteNotificationCenter:;
- (void)_sendEnqueuedNotifications;
+ (id)sharedInstance;
@end
