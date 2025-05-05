@interface DMFEndTransactionRequest : DMFTaskRequest
@property (nonatomic) NSUUID UUID;
- (void)setUUID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)UUID;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
