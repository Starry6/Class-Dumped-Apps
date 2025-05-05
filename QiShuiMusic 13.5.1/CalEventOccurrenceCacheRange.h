@interface CalEventOccurrenceCacheRange : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSTimeZone timeZone;
- (id)startDate;
- (id)endDate;
- (void).cxx_destruct;
- (id)timeZone;
- (id)initWithStartDate:endDate:timeZone:;
@end
