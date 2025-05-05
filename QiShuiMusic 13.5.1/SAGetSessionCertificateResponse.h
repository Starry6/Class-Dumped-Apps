@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand
@property (nonatomic) NSData certificate;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)certificate;
- (id)encodedClassName;
- (void)setCertificate:;
+ (id)getSessionCertificateResponse;
+ (id)getSessionCertificateResponseWithDictionary:context:;
@end
