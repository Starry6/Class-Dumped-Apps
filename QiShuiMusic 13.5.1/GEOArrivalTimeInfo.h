@interface GEOArrivalTimeInfo : NSObject
@property (nonatomic) Q legIndex;
@property (nonatomic) double remainingTime;
- (double)remainingTime;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setRemainingTime:;
- (unsigned long long)legIndex;
- (id)initWithLegIndex:remainingTime:;
- (void)setLegIndex:;
+ (BOOL)supportsSecureCoding;
@end
