@interface SSGzipOutputStream : NSOutputStream
- (long long)write:maxLength:;
- (id)initToMemory;
- (unsigned long long)streamStatus;
- (void)dealloc;
- (void)open;
- (id)streamError;
- (id)initToFileAtPath:append:;
- (unsigned long long)streamContentLength;
- (void)_setStreamError:context:;
- (void)close;
- (BOOL)setProperty:forKey:;
- (id)propertyForKey:;
- (BOOL)hasSpaceAvailable;
- (BOOL)_initializeOutputStream;
- (void).cxx_destruct;
- (long long)_consumeStreamOutput:;
@end
