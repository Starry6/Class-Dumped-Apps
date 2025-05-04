@interface AWEFormatMessageListNaviBarAvatarComponent : AWEIMComponentBase
- (void)didUpdateFormatRoom:;
- (long long)naviBarTitlePositionToBeDisplayed;
- (id)naviBarTitlePrioritiesToBeDisplayed;
- (id)naviBarTitlePrioritiesToWakeUp;
- (long long)naviBarTitlePriorityToBeSorted;
- (id)naviBarTitleCustomView;
- (id)naviBarTitleViewIntrinsicContentSize;
- (void)hostVC_viewDidLoad;
- (void)clickAvatarHandler;
- (void)componentDidMounted:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
