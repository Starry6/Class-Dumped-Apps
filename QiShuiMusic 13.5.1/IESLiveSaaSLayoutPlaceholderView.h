@interface IESLiveSaaSLayoutPlaceholderView : UIView
@property (nonatomic) BOOL disableForwarding;
@property (nonatomic) {CGSize=dd} contentSize;
- (BOOL)disableForwarding;
- (void)setDisableForwarding:;
- (id)intrinsicContentSize;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (id)contentSize;
- (void)setContentSize:;
@end
