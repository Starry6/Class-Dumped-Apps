@interface CTQoS : NSObject
@property (nonatomic) NSNumber qci;
@property (nonatomic) NSNumber bitRateMax;
@property (nonatomic) NSNumber bitRateMin;
@property (nonatomic) NSArray filters;
@property (nonatomic) NSNumber gbr;
- (id)filters;
- (void)setFilters:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)gbr;
- (id)qci;
- (void)setQci:;
- (id)bitRateMax;
- (void)setBitRateMax:;
- (id)bitRateMin;
- (void)setBitRateMin:;
+ (BOOL)supportsSecureCoding;
@end
