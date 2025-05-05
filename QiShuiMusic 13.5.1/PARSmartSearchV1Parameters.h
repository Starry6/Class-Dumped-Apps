@interface PARSmartSearchV1Parameters : NSObject
@property (nonatomic) double weightLast1hour;
@property (nonatomic) double weightLast1day;
@property (nonatomic) double weightLast1week;
@property (nonatomic) double weightLast1month;
@property (nonatomic) double weightAll;
@property (nonatomic) double weightMostRecent;
@property (nonatomic) double weightMinThresholdToSend;
- (id)init;
- (double)weightMinThresholdToSend;
- (double)weightLast1month;
- (double)weightAll;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)weightLast1week;
- (id)initFromLast1hour:last1day:last1week:last1month:all:mostRecent:minThresholdToSend:;
- (double)weightLast1day;
- (double)weightLast1hour;
- (double)weightMostRecent;
- (id)initFromBag:;
+ (BOOL)supportsSecureCoding;
@end
