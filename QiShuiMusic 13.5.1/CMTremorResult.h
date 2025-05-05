@interface CMTremorResult : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) float percentUnknown;
@property (nonatomic) float percentNone;
@property (nonatomic) float percentSlight;
@property (nonatomic) float percentMild;
@property (nonatomic) float percentModerate;
@property (nonatomic) float percentStrong;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)description;
- (id)copyWithZone:;
- (id)initWithParkinsonsResult:;
- (id)initWithStartDate:endDate:percentUnknown:percentNone:percentSlight:percentMild:percentModerate:percentStrong:;
- (float)percentUnknown;
- (float)percentNone;
- (float)percentSlight;
- (float)percentMild;
- (float)percentModerate;
- (float)percentStrong;
+ (BOOL)supportsSecureCoding;
@end
