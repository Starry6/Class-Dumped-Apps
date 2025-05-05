@interface CNMetricsReporterStub : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendDictionary:forEvent:andLog:;
- (void)logSimpleEvent:forApplication:andLog:;
@end
