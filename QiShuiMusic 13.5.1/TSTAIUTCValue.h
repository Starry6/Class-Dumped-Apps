@interface TSTAIUTCValue : NSObject
@property (nonatomic) NSDate utcDate;
@property (nonatomic) NSDate taiDate;
@property (nonatomic) Q modifiedJulianDay;
@property (nonatomic) double constant;
@property (nonatomic) double coefficient;
@property (nonatomic) Q offset;
@property (nonatomic) NSDictionary dictionary;
- (double)coefficient;
- (id)dictionary;
- (void)setOffset:;
- (id)init;
- (double)constant;
- (id)initWithDictionary:;
- (void)setConstant:;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)utcDate;
- (id)taiDate;
- (void)setUtcDate:;
- (void)setTaiDate:;
- (unsigned long long)modifiedJulianDay;
- (void)setModifiedJulianDay:;
- (void)setCoefficient:;
@end
