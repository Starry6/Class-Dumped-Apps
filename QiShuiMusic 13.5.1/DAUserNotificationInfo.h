@interface DAUserNotificationInfo : NSObject
@property (nonatomic) NSString groupIdentifier;
@property (nonatomic) @? handler;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
- (id)groupIdentifier;
- (void)setGroupIdentifier:;
- (void)setHandler:;
- (void)setCallbackQueue:;
- (id)callbackQueue;
- (id)handler;
- (void).cxx_destruct;
@end
