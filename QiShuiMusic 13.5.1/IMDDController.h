@interface IMDDController : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> scannerQueue;
- (id)init;
- (void).cxx_destruct;
- (void)scanMessage:outgoing:waitUntilDone:completionBlock:;
- (id)sharedScanner;
- (void)scanMessage:completionBlock:;
- (BOOL)_scanMessageUsingScanner:attributedString:;
- (void)_processLinkInAttributedString:;
- (BOOL)_scanAttributedStringWithMessage:attributedString:plainText:;
- (id)scannerQueue;
- (void)setScannerQueue:;
+ (id)sharedInstance;
@end
