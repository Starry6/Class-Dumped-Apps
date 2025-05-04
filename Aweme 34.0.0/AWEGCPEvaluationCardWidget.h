@interface AWEGCPEvaluationCardWidget : IESGCPBaseWidget
@property (nonatomic) NSObject<AWEGCPEvaluationCardManagerInterface> evaluationCardManager;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (id)evaluationCardManager;
- (void)widgetBindService;
- (void)setEvaluationCardManager:;
- (void).cxx_destruct;
+ (BOOL)widgetShouldBeActivated;
@end
