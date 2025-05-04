@interface AWEIMMessageTailStateComponent : AWEIMFlexComponent
@property (nonatomic) q delayState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (id)p_getListVC;
- (void)p_resendMessage:;
- (void)updateStateUI;
- (void)createPresenterIfNeeded;
- (void)stateViewTapped;
- (void)p_addStateVMKVO;
- (void)p_addSendingProgressKVOIfNeeded;
- (void)p_updateStateColor;
- (void)p_resendMessageWhenFormat:;
- (void)setDelayState:;
- (long long)delayState;
- (void)p_delayActionFinish;
- (void)p_beginDelayLoadingIfNeed;
- (void)p_updateDisplayStateWithVM:;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
+ (id)p_stateConfig;
+ (BOOL)p_enableDelaySetting;
+ (long long)p_delayTimeWithMsgType:;
@end
