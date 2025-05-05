@interface IESECShopRecommendStoreObject : NSObject
@property (nonatomic) NSArray shopList;
@property (nonatomic) IESECShopContext shopContext;
@property (nonatomic) IESECTracker tracker;
- (void)setShopContext:;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (void)setShopList:;
- (id)shopContext;
- (id)shopList;
- (void)setTracker:;
- (id)tracker;
- (void).cxx_destruct;
@end
