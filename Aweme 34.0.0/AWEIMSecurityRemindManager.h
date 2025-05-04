@interface AWEIMSecurityRemindManager : AWEIMSecurityRemindBaseManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showPopupWithPopupDictData:conversation:pageIdentifier:viewController:;
- (void)safeRemindView:didClickButtonWithModel:;
- (void)safeRemindView:onNextExam:;
- (id)currentConfigForConversation:;
- (BOOL)p_showViewWithModel:toastInfo:;
- (void)requestConfigWithParams:onComplete:;
- (void)reportStatusWithParams:;
- (BOOL)showViewWithModel:;
- (void)p_finishCurrentToast;
- (void)setNextShowViewTimeInConversation;
- (BOOL)p_showSecurityPopupView:needFrequencyControl:buttonModel:;
- (BOOL)showSecurityPopupView:;
- (BOOL)isShowing;
- (void)dealloc;
+ (void)__trackEvenShowScene:;
+ (void)__trackEventClickWithScene:reportValue:;
+ (id)sharedInstance;
+ (id)eventName;
@end
