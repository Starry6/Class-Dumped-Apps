@interface BU_IESGurdTraceNetworkInfo : NSObject
@property (nonatomic) NSString method;
@property (nonatomic) NSString URLString;
@property (nonatomic) NSDictionary params;
@property (nonatomic) @ responseObject;
@property (nonatomic) NSError error;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (void)setResponseObject:;
- (id)startDate;
- (id)URLString;
- (void)setStartDate:;
- (void)setError:;
- (id)method;
- (id)error;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)params;
- (void)setURLString:;
- (void)setParams:;
- (id)responseObject;
+ (id)infoWithMethod:URLString:params:;
@end
