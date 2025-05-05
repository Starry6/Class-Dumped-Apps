@interface INCancelRideIntentResponse : INIntentResponse
@property (nonatomic) q code;
@property (nonatomic) INCurrencyAmount cancellationFee;
@property (nonatomic) NSDateComponents cancellationFeeThreshold;
- (id)_dictionaryRepresentation;
- (id)initWithBackingStore:;
- (long long)code;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)_initWithCode:userActivity:;
- (id)initWithCode:userActivity:;
- (id)cancellationFee;
- (void)setCancellationFee:;
- (id)cancellationFeeThreshold;
- (void)setCancellationFeeThreshold:;
+ (BOOL)supportsSecureCoding;
@end
