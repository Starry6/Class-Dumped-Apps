@interface SADomainObjectCreate : SADomainCommand
@property (nonatomic) SADomainObject object;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setObject:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)object;
+ (id)domainObjectCreate;
+ (id)domainObjectCreateWithDictionary:context:;
@end
