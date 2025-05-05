@interface SASource : SADomainObject
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) NSString accountName;
@property (nonatomic) NSString domainIdentifier;
@property (nonatomic) NSNumber remote;
- (id)domainIdentifier;
- (id)remote;
- (void)setRemote:;
- (id)groupIdentifier;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (void)setAccountName:;
- (id)encodedClassName;
- (id)accountName;
- (void)setDomainIdentifier:;
+ (id)source;
+ (id)sourceWithDictionary:context:;
@end
