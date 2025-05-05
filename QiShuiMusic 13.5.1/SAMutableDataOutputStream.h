@interface SAMutableDataOutputStream : SAOutputStream
- (long long)write:maxLength:;
- (int)appendData:;
- (BOOL)hasSpaceAvailable;
- (void).cxx_destruct;
@end
