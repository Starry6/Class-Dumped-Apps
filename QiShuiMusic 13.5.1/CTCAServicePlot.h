@interface CTCAServicePlot : NSObject
@property (nonatomic) NSDate startsAt;
@property (nonatomic) NSDate endsAt;
@property (nonatomic) NSArray readings;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)startsAt;
- (void)setStartsAt:;
- (id)endsAt;
- (void)setEndsAt:;
- (id)readings;
- (void)setReadings:;
+ (BOOL)supportsSecureCoding;
@end
