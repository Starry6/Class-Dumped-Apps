@interface SASyncGroupChecksum : AceObject
@property (nonatomic) q count;
@property (nonatomic) NSString domainObjectClass;
@property (nonatomic) NSString identifierChecksum;
@property (nonatomic) SASyncAnchor syncAnchor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCount:;
- (id)groupIdentifier;
- (void)setSyncAnchor:;
- (id)syncAnchor;
- (id)encodedClassName;
- (long long)count;
- (id)domainObjectClass;
- (void)setDomainObjectClass:;
- (id)identifierChecksum;
- (void)setIdentifierChecksum:;
+ (id)groupChecksum;
+ (id)groupChecksumWithDictionary:context:;
@end
