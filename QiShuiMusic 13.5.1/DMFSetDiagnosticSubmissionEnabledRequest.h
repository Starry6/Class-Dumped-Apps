@interface DMFSetDiagnosticSubmissionEnabledRequest : DMFTaskRequest
@property (nonatomic) BOOL enabled;
- (BOOL)enabled;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setEnabled:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
