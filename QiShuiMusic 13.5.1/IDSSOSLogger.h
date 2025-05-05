@interface IDSSOSLogger : NSObject
@property (nonatomic) NSString sosURLString;
@property (nonatomic) IDSRateLimiter rateLimiter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rateLimiter;
- (void)setRateLimiter:;
- (void)logMetric:;
- (void).cxx_destruct;
- (id)initWithSOSURLString:;
- (id)sosURLString;
- (void)setSosURLString:;
+ (id)logger;
+ (id)loggerWithURLString:;
@end
