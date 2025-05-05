@interface CPLProxyResourceTransferTask : CPLResourceTransferTask
@property (nonatomic) CPLProxyLibraryManager proxyLibraryManager;
- (id)proxyLibraryManager;
- (void).cxx_destruct;
- (void)cancelTask;
- (void)setProxyLibraryManager:;
@end
