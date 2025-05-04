@interface AWEIMConIncentiveAnimationComponent : AWEIMComponentBase
@property (nonatomic) BOOL isChatNotOnScreen;
@property (nonatomic) NSString playAnimationNameForGroup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewWillDisappear;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (void)incentiveChatService:relationUpdateWithRelationID:conversationID:;
- (void)didChangeRelationOldStatus:newStatus:;
- (void)setIsChatNotOnScreen:;
- (void)p_tryPlayOpenIncentiveChatAnimation;
- (BOOL)isChatNotOnScreen;
- (void)setPlayAnimationNameForGroup:;
- (id)playAnimationNameForGroup;
- (BOOL)canShowIncentiveOpenAnimation;
- (void)p_playOpenIncentiveChatAnimation;
- (void)didEndPlayAnimation:fromMessages:isPlayFinished:isPlaySuccess:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
@end
