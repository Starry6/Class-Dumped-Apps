@interface IESLiveSaaSAudienceMoreToolsItemModel : BDDynamicModel
@property (nonatomic) IESLiveSaaSToolbarRedDotItem redDotItem;
@property (nonatomic) UIView containerView;
@property (nonatomic) Q itemType;
@property (nonatomic) NSString title;
@property (nonatomic) UIView redDotView;
@property (nonatomic) UILabel redDotCountLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL isShow;
@property (nonatomic) Q section;
@property (nonatomic) @? didTap;
@property (nonatomic) @? onDisplayed;
@property (nonatomic) @? onItemTapped;
@property (nonatomic) @? onItemDisplayed;
@property (nonatomic) BOOL disableAutoHide;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) Q redDotCount;
@property (nonatomic) q priority;
- (void)didTapContainer;
- (void)setRedDotCount:;
- (void)buildRedDotView;
- (void)buildTitleLabel;
- (id)onItemDisplayed;
- (void)addImageWith:;
- (void)buildContainerView;
- (void)buildRedDotCountLabel;
- (long long)compareWithOther:;
- (id)convertIdentifierToRedDotKey;
- (id)guideDotWithInteractItem;
- (id)identifierFromType:;
- (id)initWithTitle:itemType:;
- (id)initWithTitle:itemType:image:;
- (void)injectCustomClickAction:;
- (BOOL)isShow;
- (id)onItemTapped;
- (unsigned long long)redDotCount;
- (id)redDotCountLabel;
- (id)redDotItem;
- (id)redDotView;
- (void)setOnItemDisplayed:;
- (void)setOnItemTapped:;
- (void)setRedDotCountLabel:;
- (void)setRedDotView:;
- (void)setShowRedDot:;
- (BOOL)showRedDot;
- (void)setItemType:;
- (void)setPriority:;
- (id)containerView;
- (void)setContainerView:;
- (id)identifier;
- (void)setTitle:;
- (unsigned long long)itemType;
- (id)title;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
- (long long)priority;
- (void)updateImage:;
@end
