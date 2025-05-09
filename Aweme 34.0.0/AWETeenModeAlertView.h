@interface AWETeenModeAlertView : UIView
@property (nonatomic) UIView alertContentView;
@property (nonatomic) UIImageView headerImageView;
@property (nonatomic) AWETeenModeAlignedImageView backgroundImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UITextView messageTextView;
@property (nonatomic) UILabel linkLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UITapGestureRecognizer tapBlankAreaToDismissGesture;
@property (nonatomic) UITapGestureRecognizer tapLinkLabelGesture;
@property (nonatomic) UIPanGestureRecognizer swipeToDismissGesture;
@property (nonatomic) double originalBottomMargin;
@property (nonatomic) double originalLeftRightMargin;
@property (nonatomic) double maximumAlertContentViewHeight;
@property (nonatomic) UIColor maskBackgroundColor;
@property (nonatomic) double alertContentHeight;
@property (nonatomic) double currentSwipeOffset;
@property (nonatomic) {CGPoint=dd} lastLocation;
@property (nonatomic) q type;
@property (nonatomic) AWETeenModeAlertConfigModel windowConfigModel;
@property (nonatomic) double showTime;
@property (nonatomic) NSString UIID;
@property (nonatomic) NSString userType;
@property (nonatomic) @? commonDismissBlock;
@property (nonatomic) @? clickOpenTeenModeAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (double)showTime;
- (void)setShowTime:;
- (void)setLinkLabel:;
- (id)tapBlankAreaToDismissGesture;
- (double)currentSwipeOffset;
- (void)setCurrentSwipeOffset:;
- (void)swipeToDismiss:;
- (void)tapBlankAreaToDismiss;
- (id)swipeToDismissGesture;
- (void)setTapBlankAreaToDismissGesture:;
- (void)setSwipeToDismissGesture:;
- (void)rotated:;
- (void)tapCloseButton;
- (void)setCommonDismissBlock:;
- (void)dismissWithCancelType:;
- (void)setOriginalBottomMargin:;
- (void)setOriginalLeftRightMargin:;
- (void)setMaximumAlertContentViewHeight:;
- (void)setMaskBackgroundColor:;
- (void)p_setupUIWithComplianceSetting;
- (id)alertContentView;
- (id)p_maskLayerWithHeight:;
- (double)alertContentHeight;
- (double)originalBottomMargin;
- (id)maskBackgroundColor;
- (id)commonDismissBlock;
- (void)setAlertContentHeight:;
- (double)originalLeftRightMargin;
- (id)tapLinkLabelGesture;
- (void)tapActionButton;
- (double)maximumAlertContentViewHeight;
- (void)tapLinkLabelGestureAction;
- (id)UIID;
- (void)setUIID:;
- (void)setAlertContentView:;
- (void)setTapLinkLabelGesture:;
- (id)initWithWindowConfigModel:andType:;
- (void)setClickOpenTeenModeAction:;
- (void)setWindowConfigModel:;
- (BOOL)p_shouldExtendToEdge;
- (BOOL)p_shouldShowMaskBackground;
- (void)p_trackEvent:withCommonParametersAndExtra:;
- (void)p_setupUIForClassicStyleWithComplianceSetting;
- (id)windowConfigModel;
- (id)p_fetchImageWithURL:andDefaultImage:;
- (id)p_replacePlaceholderForString:withTextsAndLinks:;
- (long long)p_getTeenModeAlertContentPositionType;
- (id)clickOpenTeenModeAction;
- (id)lastLocation;
- (BOOL)show;
- (void)dealloc;
- (id)userType;
- (BOOL)textView:shouldInteractWithURL:inRange:interaction:;
- (BOOL)gestureRecognizerShouldBegin:;
- (long long)type;
- (void)setType:;
- (void)setTitleLabel:;
- (void)setLastLocation:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)backgroundImageView;
- (id)actionButton;
- (void)setActionButton:;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setBackgroundImageView:;
- (id)linkLabel;
- (id)headerImageView;
- (void)setHeaderImageView:;
- (id)messageTextView;
- (void)setMessageTextView:;
- (void)setUserType:;
+ (Class)aAWEPadModuleAdapterClass;
@end
