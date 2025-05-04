@interface AWEIMInputActionBarDynamicConfigUserActionComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)requestExtParams;
+ (BOOL)canCreateComponentWithContext:;
@end
