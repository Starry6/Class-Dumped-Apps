@interface AWEClassroomModel.ClassroomPriceModel : MTLModel
@property (nonatomic) q showPrice;
@property (nonatomic) q priceType;
- (long long)showPrice;
- (void)setShowPrice:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
- (long long)priceType;
- (void)setPriceType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
