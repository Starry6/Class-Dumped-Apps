@interface IESECSKUCouponViewModel : NSObject
@property (nonatomic) IESECSKUModel skuModel;
@property (nonatomic) IESECSKUDetailContext detailContext;
@property (nonatomic) NSMutableArray defaultCouponTags;
@property (nonatomic) NSArray couponTags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSKUModel:detailContext:;
- (id)couponTags;
- (id)defaultCouponTags;
- (id)detailContext;
- (void)setCouponTags:;
- (void)setDefaultCouponTags:;
- (void)setDetailContext:;
- (void)setSkuModel:;
- (id)skuModel;
- (void).cxx_destruct;
@end
