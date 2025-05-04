@interface AWEIMMessageListBulletModule : AWEIMMessageListModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)messageListVC;
- (void)handleLynxPageStatusChangedNotification:;
- (id)init;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
