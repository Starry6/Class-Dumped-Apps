@interface AWEFormatMessageListNavBarMainTitleComponent : AWEIMComponentBase
- (void)didUpdateFormatRoom:;
- (void)afterInitialComponentAllResolved:;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (void)componentDidMounted:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
