@interface WiFiAwareDataSessionStatisticsHistogramBin : NSObject
@property (nonatomic) double value;
@property (nonatomic) double binStart;
@property (nonatomic) double binEnd;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (id)description;
- (double)value;
- (BOOL)isEqual:;
- (id)initWithBinStart:binEnd:value:;
- (double)binStart;
- (double)binEnd;
+ (BOOL)supportsSecureCoding;
@end
