@interface DMFSetPasscodeLockGracePeriodRequest : DMFTaskRequest
@property (nonatomic) double seconds;
- (double)seconds;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setSeconds:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
