@interface CMPedometerBin : NSObject
@property (nonatomic) double valueOut;
@property (nonatomic) double begin;
@property (nonatomic) double lowerQuartile;
@property (nonatomic) double center;
@property (nonatomic) double upperQuartile;
@property (nonatomic) double end;
@property (nonatomic) q state;
- (double)center;
- (double)end;
- (void)dealloc;
- (id)initWithValueOut:begin:end:state:;
- (id)initWithCoder:;
- (double)valueOut;
- (void)encodeWithCoder:;
- (long long)state;
- (id)description;
- (double)upperQuartile;
- (double)begin;
- (BOOL)isEqual:;
- (double)lowerQuartile;
+ (BOOL)supportsSecureCoding;
@end
