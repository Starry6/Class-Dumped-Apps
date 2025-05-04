@interface AWEFormatMessageListNaviBarSubTitleComponent : AWEIMComponentBase
- (void)didUpdateFormatRoom:;
- (void)hostVC_willDealloc;
- (void)afterInitialComponentAllResolved:;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (void)hostVC_viewDidLoad;
- (void)clickViewHandler;
- (void)componentDidMounted:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
