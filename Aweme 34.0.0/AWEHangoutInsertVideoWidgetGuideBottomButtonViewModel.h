@interface AWEHangoutInsertVideoWidgetGuideBottomButtonViewModel : NSObject
- (long long)activateType;
- (BOOL)canRespondToTriggerType:;
- (id)initWithInfoModel:context:component:;
- (void)didClickView:atPosition:withModel:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)shouldShowButtonForModel:context:;
@end
