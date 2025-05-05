@interface ICRemoteRequestOperation : ICRequestOperation
@property (nonatomic) BOOL _shadowOperationForRemoteExecution;
@property (nonatomic) <NSSecureCoding> response;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)response;
- (void).cxx_destruct;
- (void)setResponse:;
- (void)_execute;
- (BOOL)_isShadowOperationForRemoteExecution;
- (void)_setShadowOperationForRemoteExecution:;
+ (BOOL)supportsSecureCoding;
@end
