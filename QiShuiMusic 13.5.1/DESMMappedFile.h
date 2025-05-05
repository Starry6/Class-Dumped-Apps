@interface DESMMappedFile : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) NSURL fileURL;
- (void)dealloc;
- (id)initWithURL:;
- (id)data;
- (void).cxx_destruct;
- (id)fileURL;
- (id)_mmap:len:protectionFlags:sharenFlags:filedHandle:offset:;
- (int)_munmap:len:;
@end
