@interface DMFUpdateDeclarationsRequest : DMFTaskRequest
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSString syncToken;
@property (nonatomic) NSArray upsertDeclarations;
@property (nonatomic) NSArray removeDeclarations;
- (void)setSyncToken:;
- (id)syncToken;
- (void)setOrganizationIdentifier:;
- (id)organizationIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)upsertDeclarations;
- (void)setUpsertDeclarations:;
- (id)removeDeclarations;
- (void)setRemoveDeclarations:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
