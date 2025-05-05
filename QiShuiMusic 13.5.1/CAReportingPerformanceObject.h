@interface CAReportingPerformanceObject : NSObject
@property (nonatomic) ^{pc_session=} session;
@property (nonatomic) NSArray processIdentifiers;
@property (nonatomic) NSString hostApplicationDisplayID;
@property (nonatomic) NSDictionary performanceMetrics;
@property (nonatomic) S serviceType;
@property (nonatomic) NSDictionary configuration;
- (void)setSession:;
- (void)setProcessIdentifiers:;
- (unsigned short)serviceType;
- (void)abandon;
- (void)setServiceType:;
- (void)setConfiguration:;
- (void)setHostApplicationDisplayID:;
- (id)performanceMetrics;
- (id)configuration;
- (id)session;
- (void).cxx_destruct;
- (id)processIdentifiers;
- (id)endAndReturnPerformanceMetrics;
- (void)begin;
- (id)hostApplicationDisplayID;
- (id)initWithProcessIdentifiers:;
@end
