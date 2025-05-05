@interface TTFileUploadReaderInterface : NSObject
- (unsigned long long)getCrc32:offset:size:;
- (long long)getValue:fileIndex:;
- (int)readData:offset:maxSize:minSize:data:;
- (int)close:;
- (int)open:;
@end
