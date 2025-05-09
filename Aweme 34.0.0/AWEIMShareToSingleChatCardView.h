@interface AWEIMShareToSingleChatCardView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIView wrapperContainerView;
@property (nonatomic) UIView topUserInfoContainerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView userIconImageView;
@property (nonatomic) UILabel displayNameLabel;
@property (nonatomic) UIView topUserInfoContainerViewBottomLineView;
@property (nonatomic) UIView shareInfoContainerView;
@property (nonatomic) UIView shareContentView;
@property (nonatomic) UIView postscriptContainerView;
@property (nonatomic) IESIMGrowingTextView textView;
@property (nonatomic) UIView bottomButtonContainerView;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton sendButton;
@property (nonatomic) UIView bottomButtonContainerViewTopLineView;
@property (nonatomic) UIView bottomButtonContainerViewMiddleLineView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} keyboardBounds;
@property (nonatomic) <AWEIMShareToSingleChatCardViewDelegate> delegate;
@property (nonatomic) UIImageView shareContentImageView;
- (void)p_setupUI;
- (void)growingTextViewDidChange:;
- (void)growingTextView:didChangeHeight:;
- (void)handleKeyboardShowNoti:;
- (void)handleKeyboardHideNoti:;
- (void)p_addSubviews;
- (void)p_setupLayout;
- (void)didClickCancelButton:;
- (id)shareContentView;
- (void)setShareContentView:;
- (id)keyboardBounds;
- (void)setKeyboardBounds:;
- (void)p_setupSubviews;
- (void)didClickSendButton:;
- (void)p_registNotification;
- (void)p_setupTopUserInfoView;
- (void)p_setupShareContentView;
- (void)p_setupPostscriptView;
- (void)p_setupBottomButtonView;
- (void)p_setupTopUserViewLayout;
- (void)p_setupShareInfoViewLayout;
- (void)p_setupPostscriptViewLayout;
- (void)p_setupBottomActionViewLayout;
- (void)notifyDelegateWithClickType:;
- (id)wrapperContainerView;
- (double)calculateAdjustDistanceWithParentView:targetView:keyboardBounds:;
- (void)configPlaceholder:;
- (id)userIconImageView;
- (void)setUserIconImageView:;
- (id)shareContentImageView;
- (void)setWrapperContainerView:;
- (id)topUserInfoContainerView;
- (void)setTopUserInfoContainerView:;
- (id)topUserInfoContainerViewBottomLineView;
- (void)setTopUserInfoContainerViewBottomLineView:;
- (id)shareInfoContainerView;
- (void)setShareInfoContainerView:;
- (id)postscriptContainerView;
- (void)setPostscriptContainerView:;
- (id)bottomButtonContainerView;
- (void)setBottomButtonContainerView:;
- (id)bottomButtonContainerViewTopLineView;
- (void)setBottomButtonContainerViewTopLineView:;
- (id)bottomButtonContainerViewMiddleLineView;
- (void)setBottomButtonContainerViewMiddleLineView:;
- (id)textView;
- (void)setTextView:;
- (void)setCancelButton:;
- (id)delegate;
- (id)initWithDelegate:;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)titleLabel;
- (void)setDelegate:;
- (id)sendButton;
- (void)setSendButton:;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:;
- (void)p_commonInit;
@end
