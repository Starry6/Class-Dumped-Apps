@interface DAECalendarAvailabilitySpan : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (id)startDate;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:endDate:type:;
+ (BOOL)supportsSecureCoding;
@end
