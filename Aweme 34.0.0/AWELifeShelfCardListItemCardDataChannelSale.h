@interface AWELifeShelfCardListItemCardDataChannelSale : MTLModel
@property (nonatomic) NSNumber startQuantity;
@property (nonatomic) NSNumber leftQuantity;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) NSNumber postPrice;
@property (nonatomic) NSString couponID;
@property (nonatomic) NSNumber couponType;
@property (nonatomic) NSString couponName;
@property (nonatomic) NSString couponText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCouponName:;
- (id)couponName;
- (id)couponType;
- (id)couponID;
- (void)setCouponID:;
- (void)setCouponType:;
- (id)couponText;
- (void)setCouponText:;
- (void)setStartQuantity:;
- (id)leftQuantity;
- (void)setLeftQuantity:;
- (id)postPrice;
- (void)setPostPrice:;
- (void)setStartTime:;
- (id)endTime;
- (void)setEndTime:;
- (void).cxx_destruct;
- (id)startTime;
- (id)startQuantity;
+ (id)JSONKeyPathsByPropertyKey;
@end
