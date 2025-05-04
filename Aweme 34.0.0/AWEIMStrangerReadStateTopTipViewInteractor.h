@interface AWEIMStrangerReadStateTopTipViewInteractor : AWEIMStrangerCommonTopTipViewInteractor
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)didClickTopTipViewActionBtnWithType:;
- (void)didClickTopTipViewCloseBtnWithType:;
- (void)showTopTipView;
- (id)init;
@end
