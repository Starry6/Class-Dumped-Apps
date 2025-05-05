@interface PFAppleArchiveStream : NSObject
@property (nonatomic) NSURL archiveURL;
@property (nonatomic) q compression;
@property (nonatomic) BOOL appendToExistingArchive;
@property (nonatomic) Q blockSize;
- (id)init;
- (void)dealloc;
- (BOOL)close:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)blockSize;
- (long long)compression;
- (void)setCompression:;
- (id)initWithArchiveURL:;
- (BOOL)openForWriting:;
- (id)archiveURL;
- (BOOL)openForReading:;
- (BOOL)appendToExistingArchive;
- (void)setAppendToExistingArchive:;
- (void)setBlockSize:;
@end
