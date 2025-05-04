@interface AWESplitShopTabModel : MTLModel
@property (nonatomic) q tabType;
@property (nonatomic) NSString tabName;
@property (nonatomic) q goodsCount;
@property (nonatomic) BOOL isThisTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)tabType;
- (void)setTabType:;
- (long long)goodsCount;
- (void)setGoodsCount:;
- (BOOL)isThisTab;
- (void)setIsThisTab:;
- (void).cxx_destruct;
- (id)tabName;
- (void)setTabName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
