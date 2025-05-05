@interface NEIKEv2KeyIDIdentifier : NEIKEv2Identifier
- (unsigned long long)identifierType;
- (id)initWithKeyID:;
- (id)initWithKeyIDString:;
+ (id)copyTypeDescription;
@end
