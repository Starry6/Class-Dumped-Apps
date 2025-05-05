@interface CMDyskineticSymptomResult : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) float percentUnlikely;
@property (nonatomic) float percentLikely;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)description;
- (id)copyWithZone:;
- (id)initWithStartDate:endDate:percentDyskinesiaUnlikely:percentDyskinesiaLikely:;
- (id)initWithParkinsonsResult:;
- (float)percentUnlikely;
- (float)percentLikely;
+ (BOOL)supportsSecureCoding;
@end
