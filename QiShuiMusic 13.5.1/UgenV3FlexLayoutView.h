@interface UgenV3FlexLayoutView : UIView
@property (nonatomic) BOOL isUgenRootView;
- (void)didMoved;
- (BOOL)isUgenRootView;
- (void)setIsUgenRootView:;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
@end
