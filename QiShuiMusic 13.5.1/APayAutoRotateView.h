@interface APayAutoRotateView : UIView
- (void)doAutoRotateChanged;
- (void)doAutoRotateView;
- (void)doOrientationChanged:;
- (void)enableAutoRotate:;
- (id)getMainViewRect:;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:;
@end
