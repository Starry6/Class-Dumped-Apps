@interface BMPublisherOptions : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) Q maxEvents;
@property (nonatomic) Q lastN;
@property (nonatomic) BOOL reversed;
- (id)startDate;
- (id)init;
- (BOOL)reversed;
- (unsigned long long)hash;
- (id)endDate;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithStartDate:endDate:maxEvents:lastN:reversed:;
- (unsigned long long)maxEvents;
- (unsigned long long)lastN;
+ (id)reversed;
@end
