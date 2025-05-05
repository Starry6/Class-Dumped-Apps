@interface StreamingUnzipper : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) <StreamingUnzipDelegateProtocol> inProcessExtractorDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> inProcessDelegateQueue;
- (id)initForClient:;
- (void)dealloc;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)setupUnzipperWithOutputPath:sandboxExtensionToken:options:withReply:;
- (void)supplyBytes:withReply:;
- (void)suspendStreamWithReply:;
- (void)finishStreamWithReply:;
- (void)terminateStreamWithReply:;
- (void)setActiveDelegateMethods:;
- (void)_setErrorState;
- (id)_beginNonStreamablePassthroughWithRemainingBytes:length:;
- (void)_sendExtractionProgress:;
- (void)_sendExtractionCompleteAtArchivePath:;
- (void)_extractionEnteredPassThroughMode;
- (void)_supplyBytes:length:withReply:;
- (id)inProcessExtractorDelegate;
- (void)setInProcessExtractorDelegate:;
- (id)inProcessDelegateQueue;
- (void)setInProcessDelegateQueue:;
@end
