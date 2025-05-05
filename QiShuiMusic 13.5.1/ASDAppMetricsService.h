@interface ASDAppMetricsService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_initWithServiceBroker:;
- (void).cxx_destruct;
- (void)getMetricsEventsForType:withReplyHandler:;
- (void)postMetricsEventsForType:withReplyHandler:;
- (void)recordMetricsEventsForType:withReplyHandler:;
- (void)resetMetricsEventsForType:withReplyHandler:;
+ (id)interface;
+ (id)defaultService;
@end
