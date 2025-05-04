@interface AWEIMYYLabelPresenter : AWEIMUIViewPresenter
@property (nonatomic) YYTextLayout layout;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (BOOL)isMeasurementRequired;
- (id)sizeThatFit:;
- (BOOL)isTextNode;
- (id)p_bounding:limited:;
- (void)setLayout:;
- (id)layout;
- (void)updateLayout;
- (void).cxx_destruct;
@end
