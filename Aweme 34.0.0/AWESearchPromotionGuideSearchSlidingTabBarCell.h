@interface AWESearchPromotionGuideSearchSlidingTabBarCell : DUXBaseCollectionViewCell
@property (nonatomic) DUXBaseImageView tabIcon;
@property (nonatomic) DUXBaseLabel tabLabel;
@property (nonatomic) UIView container;
@property (nonatomic) AWEEcommerceGuideSearchV2TabModel tabModel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isFromEcommerce;
- (void)setIsFromEcommerce:;
- (BOOL)isFromEcommerce;
- (id)tabModel;
- (id)tabIcon;
- (id)tabLabel;
- (void)setTabModel:;
- (void)setTabIcon:;
- (void)setTabLabel:;
- (void)updateWithModel:isSelected:isFromEcommerce:tabCount:;
- (void)setContainer:;
- (id)container;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)cellSizeWithTabModel:collectionView:isSelected:tabCount:;
+ (double)defaultHeight;
@end
