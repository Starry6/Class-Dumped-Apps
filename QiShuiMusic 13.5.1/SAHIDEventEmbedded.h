@interface SAHIDEventEmbedded : SAHIDEvent
- (double)thresholdToGroupSameEventType;
- (id)hidEventTypeString;
+ (id)classDictionaryKey;
+ (void)parseKTrace:findingHIDEvents:;
@end
