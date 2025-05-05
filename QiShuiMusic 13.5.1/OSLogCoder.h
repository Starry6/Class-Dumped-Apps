@interface OSLogCoder : NSObject
- (void)appendBytes:length:;
- (void)setPublic;
- (void)_initBlob;
- (void)setTruncated;
@end
