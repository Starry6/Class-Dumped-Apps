@interface IESECShopPreloadShopInfo : MTLModel
@property (nonatomic) Q shopType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShopType:;
- (unsigned long long)shopType;
+ (id)JSONKeyPathsByPropertyKey;
@end
