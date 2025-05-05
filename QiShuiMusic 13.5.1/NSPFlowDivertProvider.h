@interface NSPFlowDivertProvider : NEAppProxyProvider
@property (nonatomic) NSPManager manager;
- (id)init;
- (id)manager;
- (void)setManager:;
- (void).cxx_destruct;
- (void)startProxyWithOptions:completionHandler:;
- (void)stopProxyWithReason:completionHandler:;
- (BOOL)handleNewFlow:;
@end
