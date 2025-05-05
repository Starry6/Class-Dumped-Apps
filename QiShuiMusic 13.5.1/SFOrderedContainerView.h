@interface SFOrderedContainerView : UIView
@property (nonatomic) <SFOrderedContainerViewDelegate> delegate;
- (void)setDelegate:;
- (void)didAddSubview:;
- (void)_sf_setOrderedSubviews:count:;
- (id)delegate;
- (void).cxx_destruct;
- (void)willMoveToWindow:;
- (void)updateOrderedSubviews:count:;
@end
