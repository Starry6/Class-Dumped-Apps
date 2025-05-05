@interface SACalendarShowNextEvent : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)showNextEvent;
+ (id)showNextEventWithDictionary:context:;
@end
