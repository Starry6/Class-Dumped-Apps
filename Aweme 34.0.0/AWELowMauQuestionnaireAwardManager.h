@interface AWELowMauQuestionnaireAwardManager : NSObject
@property (nonatomic) AWEFeedUGSurveyFrequencyChecker ugSurveyFrequencyChecker;
- (BOOL)updateDailyShowControlWithQuestionnaire:;
- (void)updateDailyCloseControlWithItemID:;
- (BOOL)checkCanShowUGQuestionnaire:;
- (void)initFrequencyControlIfNeeded;
- (BOOL)tryToShowSnackBarWithQuestionnaire:itemId:;
- (void)showSnackBarWithData:;
- (void)requestAwardInfo:ugId:taskId:itemId:callBack:;
- (void)setUgSurveyFrequencyChecker:;
- (id)ugSurveyFrequencyChecker;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
