@interface SADomainObjectPunchOut : SABaseClientBoundCommand
@property (nonatomic) SADomainObject domainItem;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)domainItem;
- (void)setDomainItem:;
+ (id)domainObjectPunchOut;
+ (id)domainObjectPunchOutWithDictionary:context:;
@end
