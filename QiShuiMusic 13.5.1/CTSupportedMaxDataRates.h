@interface CTSupportedMaxDataRates : NSObject
@property (nonatomic) NSArray rates;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)rates;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithRates:;
- (void)setRates:;
+ (BOOL)supportsSecureCoding;
@end
