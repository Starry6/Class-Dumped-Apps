@interface SAFileOutputStream : SAOutputStream
- (long long)write:maxLength:;
- (int)appendData:;
- (BOOL)hasSpaceAvailable;
@end
