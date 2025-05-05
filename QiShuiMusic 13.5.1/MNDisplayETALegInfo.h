@interface MNDisplayETALegInfo : NSObject
@property (nonatomic) Q legIndex;
@property (nonatomic) Q remainingMinutes;
@property (nonatomic) NSDate eta;
@property (nonatomic) NSTimeZone timeZone;
- (void)setTimeZone:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)timeZone;
- (BOOL)isEqual:;
- (unsigned long long)legIndex;
- (void)setLegIndex:;
- (id)eta;
- (void)setEta:;
- (unsigned long long)remainingMinutes;
- (void)setRemainingMinutes:;
+ (BOOL)supportsSecureCoding;
@end
