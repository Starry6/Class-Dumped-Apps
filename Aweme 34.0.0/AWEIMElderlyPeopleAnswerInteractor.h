@interface AWEIMElderlyPeopleAnswerInteractor : AWEIMComponentBase
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (id)vcParent;
- (void)elderlyPeopleAnswerResultNoti:;
- (id)init;
- (id)view;
- (id)conversation;
+ (BOOL)canCreateComponentWithContext:;
+ (BOOL)allExamDisableBySetting;
+ (void)__updateServerAnswerPassResultWithExamId:;
+ (BOOL)__examDisableBySettingForKey:;
+ (void)__setRetryLimit:examId:;
+ (void)__updateAnsweredCountWithExamId:;
+ (long long)__answeredCountWithExamId:;
+ (long long)__retryLimitForExamId:;
+ (long long)examStatusWithId:;
+ (void)openSafeExamPageWithInfo:;
@end
