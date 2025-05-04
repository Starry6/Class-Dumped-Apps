@interface AWEIMMessageListUGTaskComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
+ (BOOL)canCreateComponentWithContext:;
@end
