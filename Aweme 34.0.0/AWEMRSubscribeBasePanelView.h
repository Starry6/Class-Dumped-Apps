@interface AWEMRSubscribeBasePanelView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titlePrefixLabel;
@property (nonatomic) UILabel titleSuffixLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UIView scrollContentView;
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXButton negativeButton;
@property (nonatomic) DUXButton positiveButton;
@property (nonatomic) BOOL isHorizonPanel;
@property (nonatomic) AWEGradientView shadowView;
@property (nonatomic) BOOL hasMiddleView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)middleView;
- (id)titleSuffixLabel;
- (void)setTitleSuffixLabel:;
- (BOOL)isHorizonPanel;
- (id)initWithFrame:hasMiddleView:;
- (void)setupHorizonContainerViews;
- (void)setupVerticalContainerViews;
- (id)titlePrefixLabel;
- (id)negativeButton;
- (id)positiveButton;
- (void)setupHorizonLayout;
- (void)setupVerticalLayout;
- (double)containerViewTopInset;
- (double)containerViewBottomInset;
- (void)setShadowViewHiddenIfNeed;
- (void)setTitlePrefixLabel:;
- (void)setNegativeButton:;
- (void)setPositiveButton:;
- (void)setIsHorizonPanel:;
- (BOOL)hasMiddleView;
- (void)setScrollView:;
- (void)setDescriptionLabel:;
- (id)shadowView;
- (id)scrollContentView;
- (id)initWithFrame:;
- (id)containerView;
- (id)scrollView;
- (void)scrollViewDidScroll:;
- (void)setContainerView:;
- (void)setShadowView:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)layoutSubviews;
- (void)setIconImageView:;
- (void)setupViews;
- (void)setScrollContentView:;
- (void)setupLayout;
+ (unsigned long long)suggestPanelAlignment;
+ (BOOL)isHorizonPanel;
+ (double)suggestPanelWidth;
+ (double)horizonRightPadding;
@end
