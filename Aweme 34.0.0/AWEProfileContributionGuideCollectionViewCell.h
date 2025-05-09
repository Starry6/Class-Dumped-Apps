@interface AWEProfileContributionGuideCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEUserProfileSpecificationPostContributionGuideTipModel tipModel;
@property (nonatomic) q showType;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIView backgroundColorView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel subContentLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIView borderView;
@property (nonatomic) UIView hotJumpArea;
@property (nonatomic) UIView centerView;
@property (nonatomic) AWEProfileArrowBorderView arrowBorderView;
@property (nonatomic) NSString selectedItemJumpUrl;
@property (nonatomic) BOOL refreshDataFlag;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? reloadDataBlock;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didBeginWithInfo:;
- (id)trackParams;
- (id)configWith:;
- (void)setTrackParams:;
- (void)didActionSheetDismiss:;
- (BOOL)isNewStyle;
- (id)subContentLabel;
- (void)setSubContentLabel:;
- (void)setReloadDataBlock:;
- (id)reloadDataBlock;
- (id)tipModel;
- (void)setTipModel:;
- (void)setRefreshDataFlag:;
- (BOOL)shouldEnableRichTextSubtitle;
- (id)hotJumpArea;
- (void)configOptTipUIWithShowType:;
- (void)configTipUIWithShowType:;
- (void)configTipUIOlderStyleWithShowType:;
- (void)configCellUIWithShowType:;
- (void)configEmptyUIWithShowType:;
- (void)configHeaderTipUIWithShowType:;
- (id)getTrackerInfoWithSchema:;
- (BOOL)refreshDataFlag;
- (void)preloadResourceIfNeeded;
- (id)arrowBorderView;
- (void)setArrowBorderView:;
- (id)buttonTitleLabelBigFont;
- (id)buttonTitleLabelNormalFont;
- (void)configUIStyle:;
- (double)actionButtonHeight;
- (BOOL)enableCenterLayoutOpt;
- (BOOL)enableContainerStyleStandard;
- (double)actionButtonTitleWidth;
- (id)buttonTitleLabelEmptyFont;
- (BOOL)enableTapThrottle;
- (void)openJumpURL:position:;
- (void)actionWithPosition:schema:;
- (void)clickedActionBtn;
- (void)setSelectedItemJumpUrl:;
- (id)selectedItemJumpUrl;
- (void)clickedHotJumpArea;
- (void)configHeaderTipWithBounds:shouldShowArrow:arrowOffset:type:;
- (void)setHotJumpArea:;
- (id)centerView;
- (void)dealloc;
- (id)initWithFrame:;
- (id)viewController;
- (id)backgroundColorView;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setBackgroundColorView:;
- (void)setCenterView:;
- (id)backgroundImageView;
- (void)setViewController:;
- (id)borderView;
- (void)setBorderView:;
- (void)setIconImageView:;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)actionButton;
- (id)contentLabel;
- (void)setActionButton:;
- (void)setContentLabel:;
- (void)setupSubviews;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setBackgroundImageView:;
- (void)closeButtonTapped;
- (void)setShowType:;
- (long long)showType;
- (void)actionButtonTapped;
+ (long long)showTypeWith:postEmpty:showTaskCard:;
+ (id)identifier;
@end
