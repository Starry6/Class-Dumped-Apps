@interface DMFSetDeclarationsRequest : DMFTaskRequest
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSString syncToken;
@property (nonatomic) NSArray declarations;
- (void)setSyncToken:;
- (id)syncToken;
- (void)setOrganizationIdentifier:;
- (id)organizationIdentifier;
- (void)setDeclarations:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)declarations;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
