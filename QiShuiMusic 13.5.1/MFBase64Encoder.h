@interface MFBase64Encoder : MFBaseFilterDataConsumer
@property (nonatomic) Q lineBreak;
@property (nonatomic) BOOL allowSlash;
@property (nonatomic) c padChar;
- (long long)appendData:;
- (void)setPadChar:;
- (id)initWithConsumers:;
- (void)setAllowSlash:;
- (BOOL)allowSlash;
- (unsigned long long)lineBreak;
- (char)padChar;
- (void)setLineBreak:;
- (void)setStandardLineBreak;
- (void)done;
@end
