@interface CalDateRange : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) double duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)containsRange:;
- (id)startDate;
- (void)setStartDate:;
- (id)initWithStartDate:duration:;
- (BOOL)intersectsRange:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithStartDate:endDate:;
- (void)setDuration:;
- (void)setEndDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)briefDescription;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsDate:;
- (double)duration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setStartDate:endDate:;
- (void)setStartDate:duration:;
- (BOOL)intersectsRange:allowSinglePointIntersection:;
- (BOOL)intersectsRangeWithStartDate:endDate:;
- (BOOL)intersectsRangeWithStartDate:endDate:allowSinglePointIntersection:;
- (id)intersectionWithRange:;
- (id)unionRange:;
- (id)subtractRange:;
- (id)midpoint;
- (id)_calculateMidnightsInCalendar:;
- (id)midnightsForRangeInTimeZoneString:;
+ (BOOL)supportsSecureCoding;
+ (id)rangeWithRange:;
+ (id)rangeWithStartDate:endDate:;
+ (id)rangeWithStartDate:duration:;
+ (id)rangeByExpandingRange:direction:multiplier:;
+ (id)rangeByExpandingRange:direction:duration:;
+ (id)rangeByExpandingRange:direction:components:calendar:;
+ (BOOL)range:intersectsRange:;
+ (BOOL)range:intersectsRange:allowSinglePointIntersection:;
+ (BOOL)range:intersectsRangeWithStartDate:endDate:;
+ (BOOL)range:intersectsRangeWithStartDate:endDate:allowSinglePointIntersection:;
+ (BOOL)rangesIntersectWithStartDate1:endDate1:startDate2:endDate2:;
+ (BOOL)rangesIntersectWithStartDate1:endDate1:startDate2:endDate2:allowSinglePointIntersection:;
@end
