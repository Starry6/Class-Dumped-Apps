@interface SADomainObjectDelete : SABaseClientBoundCommand
@property (nonatomic) SADomainObject identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)identifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:;
+ (id)domainObjectDelete;
+ (id)domainObjectDeleteWithDictionary:context:;
@end
