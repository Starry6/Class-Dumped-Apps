@interface SALogNumericEvent : SABaseClientBoundCommand
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString eventOperation;
@property (nonatomic) NSNumber eventValue;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)eventName;
- (void)setEventName:;
- (id)encodedClassName;
- (id)eventValue;
- (void)setEventValue:;
- (id)eventOperation;
- (void)setEventOperation:;
+ (id)logNumericEvent;
+ (id)logNumericEventWithDictionary:context:;
@end
