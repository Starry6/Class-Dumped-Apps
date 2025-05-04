@interface AWEVisionAuthorityView : AWEVisionBasicView
@property (nonatomic) DUXBaseLabel upLabel;
@property (nonatomic) DUXBaseLabel downLabel;
@property (nonatomic) ACCAnimatedButton cameraAuthorityButton;
@property (nonatomic) UIStackView authStackView;
@property (nonatomic) @? clickCameraAuthorityButtonBlock;
- (void)setUpLabel:;
- (id)upLabel;
- (void)setDownLabel:;
- (id)downLabel;
- (id)authStackView;
- (void)setAuthStackView:;
- (void)setupAuthoritySubviews;
- (void)setupOtherSubviews;
- (id)cameraAuthorityButton;
- (id)virtualRecordButton;
- (id)clickCameraAuthorityButtonBlock;
- (void)clickCameraAuthorityButton;
- (void)setClickCameraAuthorityButtonBlock:;
- (void)setCameraAuthorityButton:;
- (id)init;
- (void).cxx_destruct;
- (void)setupSubviews;
@end
