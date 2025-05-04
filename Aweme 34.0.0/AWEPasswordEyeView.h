@interface AWEPasswordEyeView : UIView
@property (nonatomic) UIImageView eyeImageView;
@property (nonatomic) UIView separationLine;
@property (nonatomic) BOOL currentPasswordState;
@property (nonatomic) @? didClickEyeImageView;
@property (nonatomic) Q passwordEyeViewStyle;
- (id)eyeImageView;
- (void)setEyeImageView:;
- (id)separationLine;
- (void)setSeparationLine:;
- (void)updateEyeViewContentSize:;
- (void)setPasswordEyeViewStyle:;
- (unsigned long long)passwordEyeViewStyle;
- (BOOL)currentPasswordState;
- (void)setCurrentPasswordState:;
- (id)didClickEyeImageView;
- (id)initWithPasswordEyeViewStyle:;
- (void)setDidClickEyeImageView:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)tapAction;
@end
