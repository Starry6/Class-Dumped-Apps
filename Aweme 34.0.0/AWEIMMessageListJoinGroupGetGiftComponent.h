@interface AWEIMMessageListJoinGroupGetGiftComponent : AWEIMMessageListTopFloatingBaseComponent
@property (nonatomic) BOOL didChecked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewWillAppear;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)componentDidMounted:;
- (void)didClickTopTipViewActionBtnWithType:;
- (void)didClickTopTipViewCloseBtnWithType:;
- (BOOL)didChecked;
- (void)setDidChecked:;
- (void)__enableShowJoinGroupGetGiftsTipWithCompletion:;
- (void)__showJoinGroupGetGiftsTip;
+ (BOOL)canCreateComponentWithContext:;
@end
