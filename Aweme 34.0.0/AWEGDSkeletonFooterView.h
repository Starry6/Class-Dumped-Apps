@interface AWEGDSkeletonFooterView : UIView
@property (nonatomic) BOOL btnEnableClick;
@property (nonatomic) <AWEGDSkeletonFooterViewDelegate> delegate;
- (id)initWithEnableClick:;
- (void)setBtnEnableClick:;
- (BOOL)btnEnableClick;
- (void)onClickConfirmBtn:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
@end
