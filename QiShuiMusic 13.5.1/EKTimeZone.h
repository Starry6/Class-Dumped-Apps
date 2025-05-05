@interface EKTimeZone : NSObject
@property (nonatomic) NSTimeZone nsTimeZone;
- (double)secondsFromGMTForAbsoluteTime:;
- (id)NSTimeZone;
- (unsigned long long)hash;
- (id)nsTimeZone;
- (id)initWithNSTimeZone:;
- (void)setNsTimeZone:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:;
- (id)copyWithZone:;
+ (id)timeZoneWithNSTimeZone:;
+ (id)timeZoneWithName:;
@end
