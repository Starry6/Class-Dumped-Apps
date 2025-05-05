@interface EKAvailabilitySpan : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startDate;
- (id)init;
- (void)setStartDate:;
- (void)setType:;
- (void)setEndDate:;
- (id)endDate;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:endDate:type:;
@end
