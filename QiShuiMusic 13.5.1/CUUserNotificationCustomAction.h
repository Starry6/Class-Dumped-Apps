@interface CUUserNotificationCustomAction : NSObject
@property (nonatomic) UNNotificationAction action;
@property (nonatomic) @? handler;
- (void)setHandler:;
- (id)action;
- (void)setAction:;
- (id)handler;
- (void).cxx_destruct;
@end
