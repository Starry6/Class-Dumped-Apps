@interface IESECShopGoodsPickTypeModel : MTLModel
@property (nonatomic) q pickType;
@property (nonatomic) NSString pickName;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) IESECURLModel normalIconURL;
@property (nonatomic) IESECURLModel selectedIconURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectedIconURL;
- (id)normalIconURL;
- (id)pickName;
- (long long)pickType;
- (void)setNormalIconURL:;
- (void)setPickName:;
- (void)setPickType:;
- (void)setSelectedIconURL:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setIsSelected:;
+ (id)JSONKeyPathsByPropertyKey;
@end
