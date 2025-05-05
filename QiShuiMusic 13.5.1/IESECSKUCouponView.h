@interface IESECSKUCouponView : UIView
@property (nonatomic) IESECTagsContainerView tagsContainer;
@property (nonatomic) NSArray couponTags;
- (id)couponTags;
- (void)p_setupCurrentCouponViewForOptimize;
- (void)setCouponTags:;
- (void)setTagsContainer:;
- (id)tagsContainer;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
