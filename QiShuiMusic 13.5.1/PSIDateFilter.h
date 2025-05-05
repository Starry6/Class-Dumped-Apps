@interface PSIDateFilter : NSObject
@property (nonatomic) PSIDate singleDate;
@property (nonatomic) PSIDate startDate;
@property (nonatomic) PSIDate endDate;
@property (nonatomic) NSString displayString;
@property (nonatomic) q int64RepresentationMask;
- (id)startDate;
- (id)initWithStartDateComponents:endDateComponents:;
- (id)displayString;
- (long long)int64RepresentationMask;
- (id)initWithStartDate:endDate:;
- (id)endDate;
- (void)setDisplayString:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithSingleDateComponents:;
- (id)initWithStartDateComponents:;
- (id)initWithEndDateComponents:;
- (id)initWithSingleDate:;
- (id)singleDate;
@end
