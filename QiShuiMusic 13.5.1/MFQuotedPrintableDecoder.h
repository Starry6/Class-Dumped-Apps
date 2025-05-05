@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer
@property (nonatomic) BOOL forTextPart;
- (long long)appendData:;
- (void)done;
- (void)setForTextPart:;
- (BOOL)forTextPart;
@end
