@interface CMMotionTimeRange : CMLogItem
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (id)startDate;
- (void)dealloc;
- (id)initWithCoder:;
- (id)initWithStartDate:endDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:;
+ (id)CLMotionTimeRangeFromCMMotionTimeRange:;
@end
