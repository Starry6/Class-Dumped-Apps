@interface DMFFetchDeclarationsRequest : DMFTaskRequest
@property (nonatomic) BOOL includeInternalState;
@property (nonatomic) BOOL includePayloadContents;
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSArray payloadIdentifiers;
- (void)setOrganizationIdentifier:;
- (id)organizationIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)payloadIdentifiers;
- (void).cxx_destruct;
- (void)setPayloadIdentifiers:;
- (BOOL)includeInternalState;
- (void)setIncludeInternalState:;
- (BOOL)includePayloadContents;
- (void)setIncludePayloadContents:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (Class)allowlistedClassForResultObject;
@end
