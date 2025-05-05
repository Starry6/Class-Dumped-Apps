@interface ARCoreAnalyticsEvent : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary eventDictionary;
- (id)eventName;
- (void).cxx_destruct;
- (id)eventDictionary;
- (id)initWithEventName:eventDictionary:;
- (void)reportEvent;
@end
