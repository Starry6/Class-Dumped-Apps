@interface AWEIMSecurityRemindTopTipManager : AWEIMSecurityRemindBaseManager
@property (nonatomic) <AWEIMSecurityRemindTopTipManagerDelegate> topTipDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTopTipDelegate:;
- (void)skyEyeFloatTipComponent:didClickButtonWithModel:;
- (void)skyEyeFloatTipComponentDidClickCloseButton:;
- (void)skyEyeFloatTipComponent:floatViewDidShow:;
- (void)safeRemindView:onNextExam:;
- (id)currentConfigForConversation:;
- (void)requestConfigWithParams:onComplete:;
- (void)reportStatusWithParams:;
- (BOOL)showViewWithModel:;
- (void)setNextShowViewTimeInConversation;
- (id)paramsForReportStatusWithConversation:remindState:config:buttonModel:didClickCloseButton:;
- (BOOL)showSecurityTipView:;
- (BOOL)p_showSecurityTipView:needFrequencyControl:buttonModel:;
- (id)topTipDelegate;
- (void)skyEyeFloatTipInteractor:didClickButtonWithModel:;
- (void)skyEyeFloatTipInteractorDidClickCloseButton:;
- (void)skyEyeFloatTipInteractor:floatViewDidShow:;
- (void).cxx_destruct;
+ (id)eventName;
@end
