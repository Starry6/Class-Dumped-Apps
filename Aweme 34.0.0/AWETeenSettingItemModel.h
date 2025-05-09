@interface AWETeenSettingItemModel : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSAttributedString attributedTitle;
@property (nonatomic) NSString titleHighLightedPart;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString fancySubtitle;
@property (nonatomic) NSString detail;
@property (nonatomic) NSString rightButtonTitle;
@property (nonatomic) UIColor rightButtonBgColor;
@property (nonatomic) UIColor rightButtonLineColor;
@property (nonatomic) UIColor rightButtonTextColor;
@property (nonatomic) BOOL isCellLoading;
@property (nonatomic) NSString loadingImageName;
@property (nonatomic) NSString loadingPlaceholderText;
@property (nonatomic) @? rightButtonAction;
@property (nonatomic) @? detailButtonAction;
@property (nonatomic) UIColor detailColor;
@property (nonatomic) BOOL ignoreTitleTranslate;
@property (nonatomic) BOOL ignoreDetailTranslate;
@property (nonatomic) double detailWidth;
@property (nonatomic) NSString iconImageName;
@property (nonatomic) NSString svgIconImageName;
@property (nonatomic) NSString iconImageBundle;
@property (nonatomic) NSURL iconImageNameUrl;
@property (nonatomic) q cellType;
@property (nonatomic) BOOL isSwitchOn;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) BOOL isDisableExceptSwitch;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL showDotView;
@property (nonatomic) q colorStyle;
@property (nonatomic) double cellHeight;
@property (nonatomic) NSNumber customTopMargin;
@property (nonatomic) NSNumber customBottomMargin;
@property (nonatomic) BOOL highlightDetail;
@property (nonatomic) @? cellTappedBlock;
@property (nonatomic) @? switchChangedBlock;
@property (nonatomic) @? cellRefreshBlock;
@property (nonatomic) NSString rightPicName;
@property (nonatomic) {CGSize=dd} rightPicSize;
@property (nonatomic) @? rightPicTappedBlock;
@property (nonatomic) @? refreshSubtitleBlock;
@property (nonatomic) BOOL hasLineView;
@property (nonatomic) q uploadIndex;
@property (nonatomic) NSNumber rightCustomViewForceVisibility;
@property (nonatomic) NSNumber customRightMargin;
- (BOOL)isEnable;
- (void)setCellTappedBlock:;
- (void)setIsEnable:;
- (void)setIsSelect:;
- (void)setIsSwitchOn:;
- (void)setSvgIconImageName:;
- (void)setSwitchChangedBlock:;
- (id)rightButtonTitle;
- (id)rightButtonAction;
- (void)setRightButtonAction:;
- (void)setRightButtonTitle:;
- (BOOL)isSelect;
- (void)setHasLineView:;
- (id)cellTappedBlock;
- (void)setUploadIndex:;
- (void)setIconImageNameUrl:;
- (id)switchChangedBlock;
- (void)refreshCell;
- (long long)uploadIndex;
- (void)setCellRefreshBlock:;
- (id)svgIconImageName;
- (id)cellRefreshBlock;
- (void)setShowDotView:;
- (BOOL)showDotView;
- (id)customBottomMargin;
- (id)iconImageBundle;
- (id)fancySubtitle;
- (void)setFancySubtitle:;
- (void)setIconImageBundle:;
- (id)titleHighLightedPart;
- (void)setTitleHighLightedPart:;
- (id)rightButtonBgColor;
- (void)setRightButtonBgColor:;
- (id)rightButtonLineColor;
- (void)setRightButtonLineColor:;
- (id)rightButtonTextColor;
- (void)setRightButtonTextColor:;
- (BOOL)isCellLoading;
- (void)setIsCellLoading:;
- (id)loadingImageName;
- (void)setLoadingImageName:;
- (id)loadingPlaceholderText;
- (void)setLoadingPlaceholderText:;
- (id)detailButtonAction;
- (void)setDetailButtonAction:;
- (BOOL)ignoreTitleTranslate;
- (void)setIgnoreTitleTranslate:;
- (BOOL)ignoreDetailTranslate;
- (void)setIgnoreDetailTranslate:;
- (double)detailWidth;
- (void)setDetailWidth:;
- (id)iconImageNameUrl;
- (BOOL)isDisableExceptSwitch;
- (void)setIsDisableExceptSwitch:;
- (void)setCustomBottomMargin:;
- (BOOL)highlightDetail;
- (void)setHighlightDetail:;
- (id)rightPicName;
- (void)setRightPicName:;
- (id)rightPicSize;
- (void)setRightPicSize:;
- (id)rightPicTappedBlock;
- (void)setRightPicTappedBlock:;
- (id)refreshSubtitleBlock;
- (void)setRefreshSubtitleBlock:;
- (BOOL)hasLineView;
- (id)rightCustomViewForceVisibility;
- (void)setRightCustomViewForceVisibility:;
- (id)customRightMargin;
- (void)setCustomRightMargin:;
- (id)titleColor;
- (void)setIconImageName:;
- (id)init;
- (long long)cellType;
- (void)setCellType:;
- (void)setIdentifier:;
- (void)setTitleColor:;
- (void)setDetail:;
- (id)initWithIdentifier:;
- (void)setSubTitle:;
- (id)identifier;
- (id)subTitle;
- (void)setAttributedTitle:;
- (long long)type;
- (void)setType:;
- (id)detail;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)attributedTitle;
- (id)iconImageName;
- (double)cellHeight;
- (void)setCellHeight:;
- (void)setDetailColor:;
- (id)detailColor;
- (BOOL)isSwitchOn;
- (long long)colorStyle;
- (void)setColorStyle:;
- (id)customTopMargin;
- (void)setCustomTopMargin:;
@end
