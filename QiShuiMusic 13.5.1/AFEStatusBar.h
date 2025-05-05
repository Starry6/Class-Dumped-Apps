@interface AFEStatusBar : UIView
@property (nonatomic) <IStatusBarDelegate> delegate;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIImage cancelImage;
@property (nonatomic) UIImage userCancelImage;
@property (nonatomic) q closeButtonType;
- (long long)closeButtonType;
- (void)setCancelImage:;
- (id)userCancelImage;
- (void)_buildShowView;
- (void)onButtonCancel;
- (void)setCancelButtonHidden:;
- (void)setCancelButtonImage:;
- (void)setCloseButtonType:;
- (void)setUserCancelImage:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (void)_updateView;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (id)cancelButton;
- (void)setTransparent:;
- (id)cancelImage;
@end
