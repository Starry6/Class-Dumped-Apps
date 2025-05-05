@interface SNTimeDurationConstraint : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSArray enumeratedDurations;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} durationRange;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithEnumeratedDurations:;
- (id)initWithDurationRange:;
- (id)enumeratedDurations;
- (id)durationRange;
+ (BOOL)supportsSecureCoding;
@end
