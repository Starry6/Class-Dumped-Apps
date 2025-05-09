@interface AWEBatManUIAlertView : UIView
@property (nonatomic) q style;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerMaxHeight;
@property (nonatomic) double textViewHorizatalInset;
@property (nonatomic) NSArray actions;
@property (nonatomic) UIView animationView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UITextView descriptionTextView;
@property (nonatomic) UILabel attributedLabel;
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) UITapGestureRecognizer tapToDismissGes;
@property (nonatomic) NSArray buttons;
@property (nonatomic) NSArray buttonTitles;
@property (nonatomic) UIWindow windowToShowAlert;
@property (nonatomic) UIView viewToShowAlert;
@property (nonatomic) BOOL dismissWhenTappedInBlankArea;
@property (nonatomic) BOOL bringAlertViewFromLoadingToBatMan;
@property (nonatomic) BOOL isCheckedAgreement1;
@property (nonatomic) BOOL isCheckedAgreement2;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @? dismissBlockWithoutCallCancelAction;
@property (nonatomic) @? configUIBlock;
@property (nonatomic) BOOL useHtmlRender;
@property (nonatomic) double maxContentHeight;
@property (nonatomic) double customCornerRadius;
@property (nonatomic) UIImage headerImage;
@property (nonatomic) UIImageView headerImageView;
@property (nonatomic) {UIEdgeInsets=dddd} headerImageEdgeInsets;
@property (nonatomic) {CGSize=dd} headerImageSize;
@property (nonatomic) q closeButtonStyle;
@property (nonatomic) @? closeButtonClickedBlock;
@property (nonatomic) BOOL shouldShowIconImage;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) {UIEdgeInsets=dddd} iconImageEdgeInsets;
@property (nonatomic) NSString title;
@property (nonatomic) NSAttributedString attributedTitle;
@property (nonatomic) NSString message;
@property (nonatomic) NSAttributedString attributedMessage;
@property (nonatomic) BOOL messageShouldAlignLeft;
@property (nonatomic) UIView bodyView;
@property (nonatomic) NSString text;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) @? handleBlock;
@property (nonatomic) BOOL isButtonAlignedVertically;
@property (nonatomic) BOOL disableLocalizations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCloseButtonStyle:;
- (long long)closeButtonStyle;
- (void)onCloseButtonClicked:;
- (void)setDismissWhenTappedInBlankArea:;
- (void)setDismissBlockWithoutCallCancelAction:;
- (void)loadSubviews;
- (void)dismissSelfDefineAlert;
- (id)tapGes;
- (void)setTapGes:;
- (BOOL)useHtmlRender;
- (BOOL)isButtonAlignedVertically;
- (void)didTapAlertView:;
- (void)setTapToDismissGes:;
- (id)tapToDismissGes;
- (id)viewToShowAlert;
- (id)windowToShowAlert;
- (void)p__showSelfDefineAlertWithAnimation;
- (void)loadSubviewsForClassicStyle;
- (void)onAttributedLabelClicked:;
- (id)headerImageEdgeInsets;
- (BOOL)shouldShowIconImage;
- (double)textViewHorizatalInset;
- (id)iconImageEdgeInsets;
- (double)containerMaxHeight;
- (BOOL)dismissWhenTappedInBlankArea;
- (id)dismissBlockWithoutCallCancelAction;
- (void)findCancelActionAndExecute;
- (void)p__dismissSelfDefineAlertWithAnimation;
- (id)handleBlock;
- (void)resetUIBeforeShowingForClassicStyle;
- (BOOL)messageShouldAlignLeft;
- (id)initForShareTrendingHeaderImage:;
- (void)setViewToShowAlert:;
- (id)configUIBlock;
- (void)setConfigUIBlock:;
- (void)setUseHtmlRender:;
- (void)setMaxContentHeight:;
- (void)setHeaderImageEdgeInsets:;
- (void)setShouldShowIconImage:;
- (void)setIconImageEdgeInsets:;
- (void)setMessageShouldAlignLeft:;
- (void)setHandleBlock:;
- (void)setIsButtonAlignedVertically:;
- (BOOL)disableLocalizations;
- (void)setDisableLocalizations:;
- (void)setContainerMaxHeight:;
- (void)setTextViewHorizatalInset:;
- (void)setWindowToShowAlert:;
- (id)closeButtonClickedBlock;
- (void)setCloseButtonClickedBlock:;
- (void)setBringAlertViewFromLoadingToBatMan:;
- (void)setHeaderImageSize:;
- (BOOL)bringAlertViewFromLoadingToBatMan;
- (id)headerImageSize;
- (void)enableActionWithIndex:isEnable:;
- (BOOL)isCheckedAgreement1;
- (void)setIsCheckedAgreement1:;
- (BOOL)isCheckedAgreement2;
- (void)setIsCheckedAgreement2:;
- (double)maxContentHeight;
- (void)show;
- (id)iconImage;
- (id)init;
- (id)message;
- (void)setButtons:;
- (id)attributedText;
- (void)addAction:;
- (void)setIconImage:;
- (void)setText:;
- (void)setBackgroundView:;
- (id)actions;
- (id)text;
- (id)buttons;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)backgroundView;
- (void)setAttributedTitle:;
- (long long)style;
- (void)setAttributedText:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setMessage:;
- (void)setActions:;
- (void)setTitle:;
- (id)attributedTitle;
- (void)setStyle:;
- (id)attributedMessage;
- (id)bodyView;
- (void)setBodyView:;
- (void)setIconImageView:;
- (void)dismiss:;
- (id)headerImage;
- (void)setHeaderImage:;
- (id)animationView;
- (void)setAnimationView:;
- (id)attributedLabel;
- (void)setAttributedLabel:;
- (id)headerImageView;
- (void)setAttributedMessage:;
- (void)setHeaderImageView:;
- (id)buttonTitles;
- (void)setButtonTitles:;
- (id)descriptionTextView;
- (void)setDescriptionTextView:;
- (double)customCornerRadius;
- (void)setCustomCornerRadius:;
- (double)containerWidth;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (void)setContainerWidth:;
+ (void)showAlertWithTitle:description:image:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:UIConfigBlock:;
+ (void)showAlertWithTitle:description:image:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:;
+ (BOOL)isSomeAlertShowing;
+ (id)alertViewWithStyle:;
@end
