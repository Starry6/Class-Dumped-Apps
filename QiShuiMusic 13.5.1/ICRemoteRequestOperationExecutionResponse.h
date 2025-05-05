@interface ICRemoteRequestOperationExecutionResponse : NSObject
@property (nonatomic) <NSSecureCoding> remoteRequestOperationResponse;
@property (nonatomic) NSError remoteRequestOperationError;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setRemoteRequestOperationResponse:;
- (void).cxx_destruct;
- (id)remoteRequestOperationError;
- (id)initWithRemoteRequestOperationResponse:remoteRequestOperationError:;
- (id)remoteRequestOperationResponse;
- (void)setRemoteRequestOperationError:;
+ (BOOL)supportsSecureCoding;
@end
