@interface AWERecommendChapterBarViewModel : AWETemplateBaseViewModel
@property (nonatomic) BOOL hasTriedToShowAlert;
- (void)trackForTemplateViewShow;
- (void)viewDidTriggerAction:;
- (void)trackForTemplateViewClick;
- (void)didInitialized;
- (void)setHasTriedToShowAlert:;
- (BOOL)hasTriedToShowAlert;
- (void)trackRecommendChapterBarShow;
- (void)trackRecommendChapterBarClick;
- (id)paramsForRecommendChapterTracker;
- (void)hideCurrentElement:;
- (void)dealloc;
+ (BOOL)shouldActiveWithData:scene:context:;
@end
