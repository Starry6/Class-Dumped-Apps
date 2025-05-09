@interface AWETeenUmbrellaPopoverSheetView : UIView
@property (nonatomic) AWETeenAgeGuideManager ageAlertManager;
@property (nonatomic) NSArray sheetItems;
@property (nonatomic) NSMutableArray sheetItemViews;
@property (nonatomic) UIView viewMask;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImageView underImage;
@property (nonatomic) CAGradientLayer contentGradientLayer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeTeenButton;
@property (nonatomic) BOOL isSheetViewShowing;
@property (nonatomic) @? dismissCompletion;
@property (nonatomic) BOOL isLightTheme;
- (void)setIsLightTheme:;
- (void)setDismissCompletion:;
- (id)initWithDefaultStyle;
- (void)showWithAnimation;
- (void)dismissWithAnimation;
- (void)p_setupViews;
- (BOOL)isSheetViewShowing;
- (id)viewMask;
- (void)setViewMask:;
- (id)p_ageString;
- (id)p_setupDefaultItems;
- (id)initWithSheetItems:;
- (void)setIsSheetViewShowing:;
- (void)p_setupShadow;
- (id)underImage;
- (id)closeTeenButton;
- (id)sheetItems;
- (void)p_setupSheetItemsWithTopPadding:;
- (id)contentGradientLayer;
- (id)sheetItemViews;
- (id)ageAlertManager;
- (void)p_clickviewMask;
- (void)p_clickCloseTeenButton;
- (void)setAgeAlertManager:;
- (void)setSheetItems:;
- (void)setSheetItemViews:;
- (void)setUnderImage:;
- (void)setContentGradientLayer:;
- (void)setCloseTeenButton:;
- (id)contentView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (id)dismissCompletion;
- (BOOL)isLightTheme;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
