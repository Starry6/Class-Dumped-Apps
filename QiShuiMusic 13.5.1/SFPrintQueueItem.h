@interface SFPrintQueueItem : NSObject
@property (nonatomic) _WKFrameHandle frameHandle;
@property (nonatomic) BOOL initiatedByWebContent;
- (void)dealloc;
- (void).cxx_destruct;
- (void)completeWithResult:;
- (id)frameHandle;
- (id)initWithFrameHandle:initiatedByWebContent:completionHandler:;
- (BOOL)initiatedByWebContent;
@end
