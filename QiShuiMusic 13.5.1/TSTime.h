@interface TSTime : NSObject
@property (nonatomic) Q nanosecondsSinceEpoch;
@property (nonatomic) NSDate utcDate;
@property (nonatomic) NSDate taiDate;
@property (nonatomic) TSGPSTime gpsTime;
@property (nonatomic) TSgPTPTime gPTPTime;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)utcDate;
- (id)initWithUTCDate:;
- (id)initWithTAIDate:;
- (id)initWithGPSTime:;
- (id)initWithgPTPTime:;
- (id)initWithNanosecondsSinceEpoch:;
- (id)taiDate;
- (id)gpsTime;
- (id)gPTPTime;
- (long long)nanosecondsSinceTime:;
- (id)timeByAddingNanoseconds:;
- (unsigned long long)nanosecondsSinceEpoch;
+ (id)timeConverter;
@end
