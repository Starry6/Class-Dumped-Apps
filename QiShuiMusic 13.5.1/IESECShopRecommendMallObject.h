@interface IESECShopRecommendMallObject : NSObject
@property (nonatomic) IESECShopRecommendMallResponse mallModel;
@property (nonatomic) IESECShopContext shopContext;
@property (nonatomic) IESECTracker tracker;
@property (nonatomic) NSString titleText;
- (void)setShopContext:;
- (id)diffIdentifier;
- (id)edgeForObject;
- (BOOL)isEqualToDiffableObject:;
- (id)mallModel;
- (void)setMallModel:;
- (id)shopContext;
- (void)setTracker:;
- (void)setTitleText:;
- (id)titleText;
- (id)tracker;
- (void).cxx_destruct;
+ (long long)maxProductCount;
+ (double)getBackViewEdge;
+ (double)getItemWidth;
+ (double)getProductEdgeLeft;
+ (double)getProductEdgeRight;
@end
