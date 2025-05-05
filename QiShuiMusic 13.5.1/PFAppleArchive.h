@interface PFAppleArchive : PFAppleArchiveStream
- (void)dealloc;
- (BOOL)close:;
- (BOOL)openForWriting:;
- (BOOL)openForReading:;
- (BOOL)encodeData:filename:error:;
- (BOOL)decodeData:filename:error:;
@end
