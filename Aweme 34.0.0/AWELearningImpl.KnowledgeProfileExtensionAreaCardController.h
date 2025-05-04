@interface AWELearningImpl.KnowledgeProfileExtensionAreaCardController : NSObject
- (BOOL)shouldShowCard;
- (void)passCardView:;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)updateLessonCountWithNotification:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)cardControllerWithCommonParam:;
@end
