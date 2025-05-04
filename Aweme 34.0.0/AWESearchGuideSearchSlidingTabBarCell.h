@interface AWESearchGuideSearchSlidingTabBarCell : UICollectionViewCell
@property (nonatomic) UIImageView tabIcon;
@property (nonatomic) UILabel tabLabel;
@property (nonatomic) AWEEcommerceGuideSearchV2TabModel tabModel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isFromEcommerce;
- (void)setIsFromEcommerce:;
- (BOOL)isFromEcommerce;
- (id)tabModel;
- (id)tabIcon;
- (id)tabLabel;
- (void)setTabModel:;
- (void)updateWithModel:isSelected:isFromEcommerce:;
- (void)setTabIcon:;
- (void)setTabLabel:;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
+ (id)cellSizeWithTabModel:isSelected:;
+ (double)defaultHeight;
@end
