@interface AWEPOIUGCRateShopItemModel : AWEPOIContentItemModel
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q barType;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL hasTrackedShow;
@property (nonatomic) NSString brandID;
@property (nonatomic) NSString brandName;
- (BOOL)isNewStyle;
- (void)setIsNewStyle:;
- (void)setBarType:;
- (void)setHasTrackedShow:;
- (BOOL)hasTrackedShow;
- (void)updateWithBarParamsModel:;
- (void)setIsSelected:;
- (id)itemID;
- (unsigned long long)barType;
- (BOOL)isSelected;
- (id)itemName;
- (void).cxx_destruct;
- (id)brandName;
- (void)setBrandName:;
- (id)brandID;
- (void)setBrandID:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)poiIDJSONTransformer;
@end
