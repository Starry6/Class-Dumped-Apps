@interface MCProfileServiceProfile : MCProfile
@property (nonatomic) NSString URLString;
@property (nonatomic) NSData enrollmentIdentityPersistentID;
@property (nonatomic) NSArray deviceAttributes;
@property (nonatomic) @ challenge;
@property (nonatomic) BOOL confirmInstallation;
@property (nonatomic) BOOL supportedServerVersion;
- (id)serializedDictionary;
- (id)URLString;
- (id)payloads;
- (void).cxx_destruct;
- (id)description;
- (id)verboseDescription;
- (id)challenge;
- (void)setURLString:;
- (id)stubDictionary;
- (id)initWithDictionary:signerCerts:allowEmptyPayload:outError:;
- (id)managedPayloads;
- (id)localizedPayloadSummaryByType;
- (id)localizedManagedPayloadSummaryByType;
- (id)_badDataTypeErrorWithFieldName:;
- (id)_unsupportedValueErrorWithFieldName:value:;
- (id)deviceAttributes;
- (id)enrollmentIdentityPersistentID;
- (void)setEnrollmentIdentityPersistentID:;
- (BOOL)confirmInstallation;
- (BOOL)supportedServerVersion;
@end
