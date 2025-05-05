@interface ICRemoteRequestOperationExecutionContext : NSObject
@property (nonatomic) ICRemoteRequestOperation remoteRequestOperation;
@property (nonatomic) q qualityOfService;
- (void)setQualityOfService:;
- (long long)qualityOfService;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)remoteRequestOperation;
- (id)initWithRemoteRequestOperation:;
+ (BOOL)supportsSecureCoding;
@end
