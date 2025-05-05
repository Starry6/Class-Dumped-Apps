@interface VKAnalyticsDDEvent : VKAnalyticsEvent
@property (nonatomic) q eventType;
@property (nonatomic) Q dataDetectorTypes;
- (void)setDataDetectorTypes:;
- (unsigned long long)dataDetectorTypes;
- (long long)eventType;
- (void)setEventType:;
- (id)eventKey;
- (long long)type;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)initWithElement:eventType:customIdentifier:;
@end
