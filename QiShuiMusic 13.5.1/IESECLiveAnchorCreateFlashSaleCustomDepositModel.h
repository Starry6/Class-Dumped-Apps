@interface IESECLiveAnchorCreateFlashSaleCustomDepositModel : IESECLiveApiBaseModel
@property (nonatomic) NSNumber minCustomTime;
@property (nonatomic) NSNumber maxCustomTime;
@property (nonatomic) NSArray deliveryDelayTimeRange;
@property (nonatomic) BOOL support;
@property (nonatomic) BOOL isJewelryCustom;
@property (nonatomic) BOOL isJadeCustom;
@property (nonatomic) NSString hintString;
- (BOOL)isJewelryCustom;
- (id)deliveryDelayTimeRange;
- (id)hintString;
- (BOOL)isJadeCustom;
- (id)maxCustomTime;
- (id)minCustomTime;
- (void)setDeliveryDelayTimeRange:;
- (void)setHintString:;
- (void)setIsJadeCustom:;
- (void)setIsJewelryCustom:;
- (void)setMaxCustomTime:;
- (void)setMinCustomTime:;
- (void).cxx_destruct;
- (BOOL)support;
- (void)setSupport:;
+ (id)JSONKeyPathsByPropertyKey;
@end
