@interface PLCoreAnalyticsEventManager : NSObject
- (id)init;
- (void)addRecordingTimedEventSnippetWithToken:forKey:onEventWithName:;
- (id)valueForKey:onEventWithName:;
- (void)mergePayload:onEventWithName:;
- (id)rawEventForEventName:;
- (id)_eventForEventName:;
- (void)removePayloadValueForKey:onEventWithName:;
- (void)stopRecordingTimedEventWithToken:forKey:onEventWithName:;
- (void)removeEventWithName:;
- (void)publishEventWithName:;
- (double)startRecordingTimedEventToken;
- (void)setPayloadValue:forKey:onEventWithName:;
- (void).cxx_destruct;
- (id)description;
- (void)setPayloadValue:forKey:onlyOnExistingEventWithName:;
- (void)_setPayloadValue:forKey:onEventWithName:eventBlock:;
- (void)publishAllEvents;
@end
