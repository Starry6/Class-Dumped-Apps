@interface AWEIMMessageListBirthdayCardComponent : AWEIMComponentBase
@property (nonatomic) BOOL isBirthdayViewOnScreen;
@property (nonatomic) AWEIMMessageVCBirthdayView birthdayView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (void)didUpdateInputVCFrame:inputViewType:oldInputViewType:;
- (void)messageListBackgroundImageDidUpdated:;
- (BOOL)isBirthdayViewOnScreen;
- (void)multiSelectedStateDidChanged:;
- (void)birthdayCardShouldDismiss;
- (id)birthdayView;
- (void)setIsBirthdayViewOnScreen:;
- (void)tryShowMessageVCBirthdayViewforUser:;
- (BOOL)shouldShowBirthdayView;
- (BOOL)canShowBirthdayGreetingInConversation:;
- (BOOL)canShowBirthdayGreetingForUser:;
- (void)showBirthdayEffectEditViewWithEffects:currentEffect:forUser:inConversation:;
- (void)setBirthdayView:;
- (void)fetchBirthdayEffectCompletion:;
- (id)generateWithPrefix:andSuffix:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
