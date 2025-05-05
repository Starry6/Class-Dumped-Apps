@interface CNMetricsReporterSpy : NSObject
@property (nonatomic) NSArray events;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)events;
- (void)clearEvents;
- (void)sendDictionary:forEvent:andLog:;
- (void)logSimpleEvent:forApplication:andLog:;
@end
