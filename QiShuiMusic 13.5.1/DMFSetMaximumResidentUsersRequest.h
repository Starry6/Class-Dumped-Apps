@interface DMFSetMaximumResidentUsersRequest : DMFTaskRequest
@property (nonatomic) Q count;
- (void)setCount:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)count;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
