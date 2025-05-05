@interface SAAceClientState : SADomainObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)aceClientState;
+ (id)aceClientStateWithDictionary:context:;
@end
