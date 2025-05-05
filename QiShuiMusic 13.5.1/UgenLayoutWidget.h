@interface UgenLayoutWidget : UgenWidget
@property (nonatomic) UIView containerView;
@property (nonatomic) NSArray children;
- (void)addwidget:;
- (void)didDisAppear;
- (id)ugenView;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (id)children;
- (void)setChildren:;
- (void)layout;
- (void).cxx_destruct;
- (void)didAppear;
- (void)render;
- (Class)containerViewClass;
@end
