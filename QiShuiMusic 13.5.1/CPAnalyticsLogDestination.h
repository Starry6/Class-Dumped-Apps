@interface CPAnalyticsLogDestination : NSObject
@property (nonatomic) NSArray logEventMatchers;
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) BOOL disabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithConfig:;
- (id)init;
- (id)log;
- (id)logEventMatchers;
- (id)initWithConfig:cpAnalyticsInstance:;
- (void)processEvent:;
- (void).cxx_destruct;
- (id)_logEventMatchersInConfiguration:;
- (id)_descriptionComponentsForEvent:forProperties:;
- (void)logEvent:withLabel:shouldLogEventName:propertiesToLog:publicPropertiesToLog:;
@end
