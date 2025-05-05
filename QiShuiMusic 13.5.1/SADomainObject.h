@interface SADomainObject : SABaseAceObject
@property (nonatomic) NSURL identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)identifier;
- (id)encodedClassName;
- (void)setIdentifier:;
+ (id)domainObject;
+ (id)domainObjectWithDictionary:context:;
@end
