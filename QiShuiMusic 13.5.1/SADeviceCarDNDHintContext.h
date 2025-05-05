@interface SADeviceCarDNDHintContext : SADomainObject
@property (nonatomic) NSString utteranceDomainIdentifier;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)utteranceDomainIdentifier;
- (void)setUtteranceDomainIdentifier:;
+ (id)carDNDHintContext;
+ (id)carDNDHintContextWithDictionary:context:;
@end
