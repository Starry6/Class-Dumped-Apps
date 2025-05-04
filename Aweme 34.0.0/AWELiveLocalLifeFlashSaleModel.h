@interface AWELiveLocalLifeFlashSaleModel : MTLModel
@property (nonatomic) q flashSalePrice;
@property (nonatomic) NSString startTime;
@property (nonatomic) NSString endTime;
@property (nonatomic) NSString flashSaleId;
@property (nonatomic) NSNumber startQuantity;
@property (nonatomic) NSNumber leftQuantity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)flashSalePrice;
- (void)setFlashSalePrice:;
- (id)flashSaleId;
- (void)setFlashSaleId:;
- (void)setStartQuantity:;
- (id)leftQuantity;
- (void)setLeftQuantity:;
- (void)setStartTime:;
- (id)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (id)startTime;
- (id)startQuantity;
+ (id)JSONKeyPathsByPropertyKey;
@end
