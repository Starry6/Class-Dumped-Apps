@interface ZimRpcManager : NSObject
@property (nonatomic) <DTFRPCProxyProtocol> dtfRPCDelegate;
@property (nonatomic) <DTFRPCProxyProtocol> rpcDelegate;
- (void)setRpcDelegate:;
- (void)doFastUploadInitRequest:withcompletionBlock:;
- (void)doFastUploadValidateRequest:withcompletionBlock:;
- (void)doSendEKYCOCRContent:withcompletionBlock:;
- (void)doSendEKYCOCRContentConfrim:withcompletionBlock:;
- (void)doSendOCRContent:idSide:withImage:withcompletionBlock:;
- (id)dtfRPCDelegate;
- (void)getSMSCode:completionBlock:;
- (id)rpcDelegate;
- (void)setDtfRPCDelegate:;
- (void)verifySMSCode:completionBlock:;
- (id)init;
- (void).cxx_destruct;
@end
