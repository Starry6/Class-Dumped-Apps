@interface AWEFormatMessageListNaviBarProfileComponent : AWEIMComponentBase
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (id)naviBarViewIntrinsicContentSize;
- (double)naviBarViewCustomSpacing;
- (void)buttonClickHandler;
- (void)componentDidMounted:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
