@interface SCLAlertViewBuilder : SCLAlertViewBuilder__WithFluent
@property (nonatomic) SCLAlertView alertView;
@property (nonatomic) @? cornerRadius;
@property (nonatomic) @? tintTopCircle;
@property (nonatomic) @? useLargerIcon;
@property (nonatomic) @? labelTitle;
@property (nonatomic) @? viewText;
@property (nonatomic) @? activityIndicatorView;
@property (nonatomic) @? shouldDismissOnTapOutside;
@property (nonatomic) @? soundURL;
@property (nonatomic) @? attributedFormatBlock;
@property (nonatomic) @? completeButtonFormatBlock;
@property (nonatomic) @? buttonFormatBlock;
@property (nonatomic) @? forceHideBlock;
@property (nonatomic) @? hideAnimationType;
@property (nonatomic) @? showAnimationType;
@property (nonatomic) @? backgroundType;
@property (nonatomic) @? customViewColor;
@property (nonatomic) @? backgroundViewColor;
@property (nonatomic) @? iconTintColor;
@property (nonatomic) @? circleIconHeight;
@property (nonatomic) @? extensionBounds;
@property (nonatomic) @? statusBarHidden;
@property (nonatomic) @? statusBarStyle;
@property (nonatomic) @? alertIsDismissed;
@property (nonatomic) @? alertDismissAnimationIsCompleted;
@property (nonatomic) @? alertShowAnimationIsCompleted;
@property (nonatomic) @? removeTopCircle;
@property (nonatomic) @? addCustomView;
@property (nonatomic) @? addTextField;
@property (nonatomic) @? addCustomTextField;
@property (nonatomic) @? addSwitchViewWithLabelTitle;
@property (nonatomic) @? addTimerToButtonIndex;
@property (nonatomic) @? setTitleFontFamily;
@property (nonatomic) @? setBodyTextFontFamily;
@property (nonatomic) @? setButtonsTextFontFamily;
@property (nonatomic) @? addButtonWithActionBlock;
@property (nonatomic) @? addButtonWithValidationBlock;
@property (nonatomic) @? addButtonWithTarget;
@property (nonatomic) @? addButtonWithBuilder;
@property (nonatomic) @? addTextFieldWithBuilder;
- (void)setupFluent;
- (id)init;
- (id)initWithNewWindow;
- (id)initWithNewWindowWidth:;
- (id)alertView;
- (void)setAlertView:;
- (id)cornerRadius;
- (void)setCornerRadius:;
- (id)tintTopCircle;
- (void)setTintTopCircle:;
- (id)useLargerIcon;
- (void)setUseLargerIcon:;
- (id)labelTitle;
- (void)setLabelTitle:;
- (id)viewText;
- (void)setViewText:;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:;
- (id)shouldDismissOnTapOutside;
- (void)setShouldDismissOnTapOutside:;
- (id)soundURL;
- (void)setSoundURL:;
- (id)attributedFormatBlock;
- (void)setAttributedFormatBlock:;
- (id)completeButtonFormatBlock;
- (void)setCompleteButtonFormatBlock:;
- (id)buttonFormatBlock;
- (void)setButtonFormatBlock:;
- (id)forceHideBlock;
- (void)setForceHideBlock:;
- (id)hideAnimationType;
- (void)setHideAnimationType:;
- (id)showAnimationType;
- (void)setShowAnimationType:;
- (id)backgroundType;
- (void)setBackgroundType:;
- (id)customViewColor;
- (void)setCustomViewColor:;
- (id)backgroundViewColor;
- (void)setBackgroundViewColor:;
- (id)iconTintColor;
- (void)setIconTintColor:;
- (id)circleIconHeight;
- (void)setCircleIconHeight:;
- (id)extensionBounds;
- (void)setExtensionBounds:;
- (id)statusBarHidden;
- (void)setStatusBarHidden:;
- (id)statusBarStyle;
- (void)setStatusBarStyle:;
- (id)alertIsDismissed;
- (void)setAlertIsDismissed:;
- (id)alertDismissAnimationIsCompleted;
- (void)setAlertDismissAnimationIsCompleted:;
- (id)alertShowAnimationIsCompleted;
- (void)setAlertShowAnimationIsCompleted:;
- (id)removeTopCircle;
- (void)setRemoveTopCircle:;
- (id)addCustomView;
- (void)setAddCustomView:;
- (id)addTextField;
- (void)setAddTextField:;
- (id)addCustomTextField;
- (void)setAddCustomTextField:;
- (id)addSwitchViewWithLabelTitle;
- (void)setAddSwitchViewWithLabelTitle:;
- (id)addTimerToButtonIndex;
- (void)setAddTimerToButtonIndex:;
- (id)setTitleFontFamily;
- (void)setSetTitleFontFamily:;
- (id)setBodyTextFontFamily;
- (void)setSetBodyTextFontFamily:;
- (id)setButtonsTextFontFamily;
- (void)setSetButtonsTextFontFamily:;
- (id)addButtonWithActionBlock;
- (void)setAddButtonWithActionBlock:;
- (id)addButtonWithValidationBlock;
- (void)setAddButtonWithValidationBlock:;
- (id)addButtonWithTarget;
- (void)setAddButtonWithTarget:;
- (id)addButtonWithBuilder;
- (void)setAddButtonWithBuilder:;
- (id)addTextFieldWithBuilder;
- (void)setAddTextFieldWithBuilder:;
- (void).cxx_destruct;
@end
