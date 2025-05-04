@interface AWEPOIDouDiscountRankInfoModel : MTLModel
@property (nonatomic) NSString rankCode;
@property (nonatomic) NSString rankName;
@property (nonatomic) AWEURLModel categoryIcon;
@property (nonatomic) NSString categoryName;
@property (nonatomic) q itemCount;
@property (nonatomic) q vvTotal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rankCode;
- (void)setRankCode:;
- (id)rankName;
- (void)setRankName:;
- (long long)vvTotal;
- (void)setVvTotal:;
- (long long)itemCount;
- (void).cxx_destruct;
- (void)setItemCount:;
- (id)categoryName;
- (void)setCategoryName:;
- (void)setCategoryIcon:;
- (id)categoryIcon;
+ (id)JSONKeyPathsByPropertyKey;
@end
