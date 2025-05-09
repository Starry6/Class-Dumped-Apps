@interface AWEPOIMarkView : AWEAnimatedButton
@property (nonatomic) UIImageView containerView;
@property (nonatomic) UIImageView markImageView;
@property (nonatomic) UILabel markLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIView verticalSeperateLine;
@property (nonatomic) UILabel adTagLabel;
@property (nonatomic) UIView iconBkgView;
@property (nonatomic) @? onClickedBlock;
@property (nonatomic) AWEPOIMarkViewUIConfigModel uiConfigModel;
- (id)initWithUIConfigModel:;
- (void)setMarkImageSize:;
- (id)markImageView;
- (void)setMarkText:;
- (void)setMarkImage:;
- (void)setMarkImageURLs:;
- (void)setMarkImageURLs:placeholder:;
- (void)setMarkBackgroundImage:;
- (void)setNeedIconDarkBkg:;
- (void)setLabelHeightWhenExpanded:;
- (void)setLabelHeightWhenNotExpanded:;
- (id)markLabel;
- (id)verticalSeperateLine;
- (id)adTagLabel;
- (id)uiConfigModel;
- (id)iconBkgView;
- (BOOL)shouldShowArrow;
- (id)onClickedBlock;
- (void)onButtonClicked;
- (void)setMarkNumberOfLinesZero;
- (void)updateLeftMargin:;
- (void)updateRightMargin:;
- (void)setMarkTextColor:;
- (void)setMarkDisableLocalization:;
- (void)setMarkTextFont:;
- (void)setMarkTextAlpha:;
- (void)setMarkBackgroundImageURLs:;
- (void)setMarkBackgroundColor:;
- (void)setOnClickedBlock:;
- (void)setUiConfigModel:;
- (void)setMarkImageView:;
- (void)setMarkLabel:;
- (void)setVerticalSeperateLine:;
- (void)setIconBkgView:;
- (void)setAdTagLabel:;
- (id)accessibilityLabel;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)markViewWithDefaultUIConfigModel;
@end
