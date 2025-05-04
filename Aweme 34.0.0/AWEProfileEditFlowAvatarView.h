@interface AWEProfileEditFlowAvatarView : AWEProfileEditFlowStepView
@property (nonatomic) AFDButton choosePhotoButton;
@property (nonatomic) UILabel choosePhotoLabel;
@property (nonatomic) UILabel publishAsStoryLabel;
@property (nonatomic) DUXCheckBox publishAsStoryCheckBox;
@property (nonatomic) CAShapeLayer avatarDashedLineBorderLayer;
@property (nonatomic) UIImageView cameraImageView;
- (void)awe_themeReload;
- (void)configWithViewModel:;
- (void)p_updateUI;
- (id)choosePhotoButton;
- (id)cameraImageView;
- (id)publishAsStoryLabel;
- (id)publishAsStoryCheckBox;
- (id)avatarDashedLineBorderLayer;
- (void)p_choosePhoto:;
- (void)p_selectPublishAsStory:;
- (void)tapNextButton:;
- (void)setChoosePhotoButton:;
- (void)setPublishAsStoryLabel:;
- (void)setPublishAsStoryCheckBox:;
- (void)setAvatarDashedLineBorderLayer:;
- (void)setCameraImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)choosePhotoLabel;
- (void)setChoosePhotoLabel:;
@end
