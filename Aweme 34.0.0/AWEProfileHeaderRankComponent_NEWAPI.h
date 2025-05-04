@interface AWEProfileHeaderRankComponent_NEWAPI : AWEProfileHeaderBaseComponent
@property (nonatomic) AWEProfileHeaderVirtualView virtualView;
@property (nonatomic) AWEProfileBillboardButton button;
@property (nonatomic) UIView containerView;
- (id)buildVirtualView:;
- (void)configButton;
- (void)setVirtualView:;
- (void)updateComponentData:;
- (BOOL)shouldShowRank;
- (BOOL)shouldShowBrandInfo;
- (BOOL)shouldShowDogCard;
- (void)setButton:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)button;
- (id)virtualView;
@end
