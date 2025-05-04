@interface AWEIMEmotionCareBotFeedbackComponent : AWEIMFlexComponent
@property (nonatomic) q feedbackType;
@property (nonatomic) Q visibleOption;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (void)p_addKVO;
- (void)p_updateProps;
- (void)p_createPresenterIfNeed;
- (void)setVisibleOption:;
- (void)p_tryTrackShowFeedback;
- (void)p_trackClickFeedback:;
- (unsigned long long)visibleOption;
- (long long)feedbackType;
- (void)setFeedbackType:;
+ (BOOL)canCreateComponentWithContext:;
@end
