@interface EKAvailabilitySpanDate : NSObject
@property (nonatomic) NSDate spanDate;
@property (nonatomic) q dateType;
@property (nonatomic) q spanType;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (long long)spanType;
- (id)initWithDate:dateType:spanType:;
- (id)spanDate;
- (void)setSpanDate:;
- (long long)dateType;
- (void)setDateType:;
- (void)setSpanType:;
+ (unsigned int)valueForSpanType:;
@end
