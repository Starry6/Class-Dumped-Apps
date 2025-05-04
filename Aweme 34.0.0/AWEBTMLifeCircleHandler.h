@interface AWEBTMLifeCircleHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppHandleNotification;
- (void)onHandleAppShortcutAction;
- (BOOL)onHandleAppContinueUserActivity;
- (BOOL)enableVirtualNode;
+ (unsigned long long)priority;
@end
