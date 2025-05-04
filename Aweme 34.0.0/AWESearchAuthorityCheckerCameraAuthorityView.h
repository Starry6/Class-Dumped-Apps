@interface AWESearchAuthorityCheckerCameraAuthorityView : UIView
@property (nonatomic) DUXBaseLabel upLabel;
@property (nonatomic) DUXBaseLabel downLabel;
@property (nonatomic) ACCAnimatedButton cameraAuthorityButton;
@property (nonatomic) DUXBaseButton closeButton;
@property (nonatomic) UIStackView authStackView;
- (void)clickCloseButton;
- (void)setUpLabel:;
- (id)upLabel;
- (void)setDownLabel:;
- (id)downLabel;
- (id)authStackView;
- (void)setAuthStackView:;
- (void)setupAuthoritySubviews;
- (void)setupOtherSubviews;
- (id)cameraAuthorityButton;
- (void)clickCameraAuthorityButton;
- (void)setCameraAuthorityButton:;
- (id)init;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setCloseButton:;
- (id)closeButton;
@end
