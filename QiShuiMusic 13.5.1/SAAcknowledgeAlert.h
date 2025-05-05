@interface SAAcknowledgeAlert : SABaseClientBoundCommand
@property (nonatomic) SADomainObject object;
- (void)setObject:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)object;
+ (id)acknowledgeAlert;
+ (id)acknowledgeAlertWithDictionary:context:;
@end
