@interface CLSAggregatedValue : CLSReportItem
@property (nonatomic) double value;
@property (nonatomic) q totalSampleCount;
@property (nonatomic) double normalized;
@property (nonatomic) NSInteger aggregateType;
- (void)add:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (long long)compare:;
- (id)description;
- (double)value;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (long long)totalSampleCount;
- (void)setTotalSampleCount:;
- (void)scalarMultiply:;
- (double)normalized;
- (int)aggregateType;
- (void)setAggregateType:;
+ (BOOL)supportsSecureCoding;
@end
