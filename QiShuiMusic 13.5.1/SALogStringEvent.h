@interface SALogStringEvent : SABaseClientBoundCommand
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString eventValue;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)eventName;
- (void)setEventName:;
- (id)encodedClassName;
- (id)eventValue;
- (void)setEventValue:;
+ (id)logStringEvent;
+ (id)logStringEventWithDictionary:context:;
@end
