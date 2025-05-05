@interface SAGetSessionCertificate : SABaseCommand
@property (nonatomic) NSNumber deviceAuthVersion;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)deviceAuthVersion;
- (void)setDeviceAuthVersion:;
+ (id)getSessionCertificate;
+ (id)getSessionCertificateWithDictionary:context:;
@end
