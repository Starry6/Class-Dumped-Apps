@interface SADomainObjectRetrieve : SABaseClientBoundCommand
@property (nonatomic) NSArray identifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)identifiers;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifiers:;
- (BOOL)mutatingCommand;
+ (id)domainObjectRetrieve;
+ (id)domainObjectRetrieveWithDictionary:context:;
@end
