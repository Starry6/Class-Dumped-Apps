@interface DMFUpdateEnqueuedCommandsRequest : DMFTaskRequest
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSArray addCommands;
@property (nonatomic) NSArray removeCommands;
- (void)setOrganizationIdentifier:;
- (id)organizationIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)addCommands;
- (void)setAddCommands:;
- (id)removeCommands;
- (void)setRemoveCommands:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
