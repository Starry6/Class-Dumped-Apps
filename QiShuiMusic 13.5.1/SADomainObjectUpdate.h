@interface SADomainObjectUpdate : SABaseClientBoundCommand
@property (nonatomic) SADomainObject addFields;
@property (nonatomic) SADomainObject identifier;
@property (nonatomic) SADomainObject removeFields;
@property (nonatomic) SADomainObject setFields;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)identifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:;
- (id)addFields;
- (void)setAddFields:;
- (id)removeFields;
- (void)setRemoveFields:;
- (id)setFields;
- (void)setSetFields:;
+ (id)domainObjectUpdate;
+ (id)domainObjectUpdateWithDictionary:context:;
@end
