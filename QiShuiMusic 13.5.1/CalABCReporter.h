@interface CalABCReporter : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSString type;
@property (nonatomic) NSString subtype;
@property (nonatomic) NSString subtypeContext;
@property (nonatomic) NSArray events;
@property (nonatomic) BOOL ignoreRateLimiting;
- (id)subtype;
- (void)setType:;
- (void)setSubtype:;
- (void)setSubtypeContext:;
- (id)subtypeContext;
- (void)setEvents:;
- (id)type;
- (void).cxx_destruct;
- (id)events;
- (id)domain;
- (void)report;
- (id)initWithType:subtype:context:;
- (BOOL)rateLimitingAllowsABCReport;
- (BOOL)ignoreRateLimiting;
- (void)setIgnoreRateLimiting:;
@end
