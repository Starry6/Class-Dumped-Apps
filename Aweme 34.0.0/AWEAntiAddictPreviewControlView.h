@interface AWEAntiAddictPreviewControlView : UIView
@property (nonatomic) AWEAntiAddictPreviewControlViewModel viewModel;
@property (nonatomic) <AWEAntiAddictPreviewControlViewDelegate> delegate;
@property (nonatomic) UIView videoView;
@property (nonatomic) UIButton returnButton;
@property (nonatomic) UIView boardView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UIImageView mainEditImageView;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIImageView subEditImageView;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIImageView blurCoverImageView;
@property (nonatomic) UIView inputOutsideView;
@property (nonatomic) UIView inputBarView;
@property (nonatomic) UIView inputContainerView;
@property (nonatomic) UITextField inputTextfield;
@property (nonatomic) UILabel inputTintLabel;
@property (nonatomic) UIButton inputConfirmButton;
@property (nonatomic) UIView photoFrameFixer;
@property (nonatomic) BOOL isVideoViewShrinked;
@property (nonatomic) Q editingTitleType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inputBarView;
- (void)setReturnButton:;
- (id)returnButton;
- (void)playConfrimButtonAnimation;
- (void)mainEditDidTap;
- (void)subEditDidTap;
- (id)inputOutsideView;
- (id)inputConfirmButton;
- (id)inputContainerView;
- (id)inputTintLabel;
- (id)inputTextfield;
- (id)p_getEditingTitleTypeName:;
- (void)setEditingTitleType:;
- (unsigned long long)editingTitleType;
- (void)p_trackClickEditButtonkWithType:;
- (id)p_validTextFieldText;
- (void)p_trackClickInputConfirmButtonWithType:;
- (void)p_updateInputConfirmEnable;
- (void)p_updateInputTint;
- (void)inputConfirmDidClick:;
- (void)inputEditingChanged:;
- (void)inputOutsideViewDidClick;
- (void)setInputOutsideView:;
- (void)setInputBarView:;
- (void)setInputContainerView:;
- (void)setInputTextfield:;
- (void)setInputTintLabel:;
- (void)setInputConfirmButton:;
- (id)boardView;
- (BOOL)isVideoViewShrinked;
- (void)setIsVideoViewShrinked:;
- (void)presentBoardWithAnimation;
- (void)p_shrinkVideoViewWithCompletion:;
- (id)blurCoverImageView;
- (void)setBlurCoverImageView:;
- (double)calculateBoardViewTop;
- (id)mainTitleLabel;
- (id)mainEditImageView;
- (id)subEditImageView;
- (void)updateCustomLayout;
- (id)calculateShrinkVideoSize;
- (BOOL)isPadFullScreen;
- (id)photoFrameFixer;
- (void)setPhotoFrameFixer:;
- (void)returnButtonDidClick:;
- (void)confirmButtonDidClick:;
- (id)initWithFrame:viewModel:delegate:;
- (void)addVideoView:;
- (void)shrinkVideoViewIfNeeded;
- (void)updateBlurCoverWithModel:;
- (void)setBoardView:;
- (void)setMainTitleLabel:;
- (void)setMainEditImageView:;
- (void)setSubEditImageView:;
- (void)dealloc;
- (id)delegate;
- (id)videoView;
- (void)setVideoView:;
- (id)viewModel;
- (void)setSubtitleLabel:;
- (BOOL)textFieldShouldReturn:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (void)textFieldDidBeginEditing:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)setupUI;
- (id)confirmButton;
- (void)keyboardWillHideNotification:;
- (void)setConfirmButton:;
- (void)setupNotifications;
- (void)keyboardWillShowNotification:;
+ (unsigned long long)getPreviewVideoTypeEnum:;
+ (id)getPreviewVideoTypeString:;
@end
