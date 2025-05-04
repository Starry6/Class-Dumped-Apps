@interface AWEIMSkyLivePendantPresenter : AWEIMSkylightBasePresenter
@property (nonatomic) BOOL showIndicator;
@property (nonatomic) UIColor borderColor;
@property (nonatomic) NSString iconText;
- (void)updateView:;
- (id)iconText;
- (void)setIconText:;
- (BOOL)showIndicator;
- (unsigned long long)componentViewPosition;
- (id)componentViewSize;
- (void)setShowIndicator:;
- (void)setBorderColor:;
- (id)borderColor;
- (void).cxx_destruct;
- (id)createView;
@end
