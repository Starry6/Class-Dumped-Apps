@interface IESLiveGiftAssemblyCustomizedCardView : UIView
@property (nonatomic) IESLiveGiftAssemblyCustomizedCardConfig config;
@property (nonatomic) <IESLiveGiftAssemblyCustomizedCardViewDelegate> delegate;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView cardImageView;
@property (nonatomic) UILabel topLabel;
@property (nonatomic) UILabel subLabel;
@property (nonatomic) UIImageView selectedBorderImageView;
@property (nonatomic) UIImageView statusIconView;
@property (nonatomic) UIView topRightView;
@property (nonatomic) UILabel topRightLabel;
@property (nonatomic) UIView remindPointView;
@property (nonatomic) Q showType;
@property (nonatomic) BOOL isShowingOnScrollView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remindPointView;
- (void)h_clearCardCache;
- (BOOL)isShowingOnScrollView;
- (void)p_didExposeCustomizedCard;
- (void)p_didTapCustomizedCard;
- (void)p_updateUIWithLabelText:;
- (void)p_updateUIWithShowRemindPointRemind:;
- (id)selectedBorderImageView;
- (void)setIsShowingOnScrollView:;
- (void)setRemindPointView:;
- (void)setSelectedBorderImageView:;
- (void)setStatusIconView:;
- (void)setTopRightLabel:;
- (void)setTopRightView:;
- (id)statusIconView;
- (id)topRightLabel;
- (id)topRightView;
- (void)updateCardOnSelection:;
- (void)updateCardWithConfig:;
- (void)updateUIWithLockStatus:;
- (void)setupConstraints;
- (id)containerView;
- (void)setConfig:;
- (void)setContainerView:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)config;
- (void)setupViews;
- (id)topLabel;
- (void)setTopLabel:;
- (id)cardImageView;
- (unsigned long long)showType;
- (void)setShowType:;
- (id)subLabel;
- (void)setSubLabel:;
- (id)initWithConfig:delegate:;
- (void)setCardImageView:;
@end
