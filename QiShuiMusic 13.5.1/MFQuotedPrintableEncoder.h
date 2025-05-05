@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer
@property (nonatomic) BOOL forTextPart;
@property (nonatomic) BOOL forHeader;
- (long long)appendData:;
- (void)done;
- (void)setForTextPart:;
- (BOOL)forTextPart;
- (BOOL)forHeader;
- (void)setForHeader:;
+ (unsigned long long)requiredSizeToEncodeHeaderBytes:length:;
@end
