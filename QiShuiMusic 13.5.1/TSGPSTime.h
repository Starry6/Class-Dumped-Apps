@interface TSGPSTime : NSObject
@property (nonatomic) Q nanosecondsSinceEpoch;
@property (nonatomic) I extendedWeek;
@property (nonatomic) S week;
@property (nonatomic) double seconds;
@property (nonatomic) Q nanoseconds;
- (double)seconds;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned short)week;
- (unsigned long long)nanoseconds;
- (id)initWithNanosecondsSinceEpoch:;
- (unsigned long long)nanosecondsSinceEpoch;
- (id)initWithExtendedWeek:seconds:;
- (id)initWithExtendedWeek:nanoseconds:;
- (id)initWithWeek:seconds:rollovers:;
- (id)initWithWeek:nanoseconds:rollovers:;
- (unsigned int)extendedWeek;
@end
