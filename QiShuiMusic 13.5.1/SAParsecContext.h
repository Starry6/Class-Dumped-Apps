@interface SAParsecContext : SADomainObject
@property (nonatomic) NSData httpBody;
@property (nonatomic) NSDictionary httpHeaders;
@property (nonatomic) NSString httpMethod;
@property (nonatomic) NSString httpUrl;
- (id)groupIdentifier;
- (id)httpHeaders;
- (id)httpMethod;
- (void)setHttpMethod:;
- (id)httpUrl;
- (void)setHttpHeaders:;
- (id)httpBody;
- (id)encodedClassName;
- (void)setHttpBody:;
- (void)setHttpUrl:;
+ (id)parsecContext;
+ (id)parsecContextWithDictionary:context:;
@end
