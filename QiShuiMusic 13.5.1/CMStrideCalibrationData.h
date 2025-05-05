@interface CMStrideCalibrationData : NSObject
@property (nonatomic) q state;
@property (nonatomic) double kValue;
@property (nonatomic) double begin;
@property (nonatomic) double end;
- (void)setEnd:;
- (double)end;
- (void)setState:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)state;
- (id)description;
- (double)begin;
- (id)copyWithZone:;
- (id)initWithBegin:end:state:kValue:;
- (double)kValue;
- (void)setKValue:;
- (void)setBegin:;
+ (BOOL)supportsSecureCoding;
@end
