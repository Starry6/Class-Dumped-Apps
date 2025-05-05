@interface TRIEvaluationStatusCursor : NSObject
@property (nonatomic) NSDate date;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)date;
- (void)encodeWithCoder:;
- (id)initWithSecondsFromEpoch:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
