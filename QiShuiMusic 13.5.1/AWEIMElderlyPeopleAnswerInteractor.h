@interface AWEIMElderlyPeopleAnswerInteractor : AWEIMInteractorObject
- (void)elderlyPeopleAnswerResultNoti:;
- (id)vcParent;
- (id)init;
- (id)conversation;
- (id)view;
- (void)viewDidAppear:;
+ (long long)__answeredCountWithExamId:;
+ (BOOL)__examDisableBySettingForKey:;
+ (long long)__retryLimitForExamId:;
+ (void)__setRetryLimit:examId:;
+ (void)__updateAnsweredCountWithExamId:;
+ (void)__updateServerAnswerPassResultWithExamId:;
+ (BOOL)allExamDisableBySetting;
+ (long long)examStatusWithId:;
+ (void)openSafeExamPageWithInfo:;
@end
