@interface MFMessageBodyParserObject : NSObject
@property (nonatomic) double timeoutInterval;
- (double)timeoutInterval;
- (void)setTimeoutInterval:;
- (void)abortParsing;
- (void)copyBlocks;
- (void)messageBodyParserWillBeginParsing:;
- (BOOL)shouldProceedParsing;
- (BOOL)areBlocksCopied;
@end
