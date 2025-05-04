@interface AWEProfileHeaderRankComponent : AWERLComponent
@property (nonatomic) AWERLVirtualNode node;
@property (nonatomic) AWEProfileBillboardButton button;
@property (nonatomic) UIView containerView;
- (void)configButton;
- (id)virtualNodeWithChildren:;
- (void)updateComponentData:;
- (BOOL)shouldShowRank;
- (BOOL)shouldShowBrandInfo;
- (BOOL)shouldShowDogCard;
- (id)node;
- (void)setButton:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)button;
- (void)setNode:;
@end
