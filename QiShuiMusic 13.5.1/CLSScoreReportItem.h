@interface CLSScoreReportItem : CLSActivityReportItem
@property (nonatomic) double value;
@property (nonatomic) double maxValue;
@property (nonatomic) double normalized;
- (void)add:;
- (id)initWithCoder:;
- (double)maxValue;
- (void)encodeWithCoder:;
- (void)setValue:;
- (long long)compare:;
- (id)description;
- (double)value;
- (id)dictionaryRepresentation;
- (void)setMaxValue:;
- (id)copyWithZone:;
- (void)scalarMultiply:;
- (double)normalized;
- (id)convertToItemCompatibleWithItem:;
+ (BOOL)supportsSecureCoding;
@end
