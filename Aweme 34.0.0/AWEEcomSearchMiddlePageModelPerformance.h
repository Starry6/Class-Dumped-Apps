@interface AWEEcomSearchMiddlePageModelPerformance : MTLModel
@property (nonatomic) double requestTime;
@property (nonatomic) double responseTime;
@property (nonatomic) double postDataTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPostDataTime:;
- (double)postDataTime;
- (double)requestTime;
- (void)setRequestTime:;
- (double)responseTime;
- (void)setResponseTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
