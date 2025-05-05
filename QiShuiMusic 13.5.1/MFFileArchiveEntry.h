@interface MFFileArchiveEntry : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) q uncompressedSize;
@property (nonatomic) {_NSRange=QQ} compressedRange;
@property (nonatomic) BOOL isDeflated;
@property (nonatomic) BOOL isDirectory;
@property (nonatomic) NSData contents;
- (BOOL)isDirectory;
- (id)path;
- (id)fileName;
- (id)contents;
- (void)setPath:;
- (id)initWithDirectoryPath:;
- (void)merge:;
- (void)setContents:;
- (void).cxx_destruct;
- (id)description;
- (long long)compressedSize;
- (void)setIsDirectory:;
- (id)initWithContents:path:;
- (long long)uncompressedSize;
- (void)setUncompressedSize:;
- (id)compressedRange;
- (void)setCompressedRange:;
- (BOOL)isDeflated;
- (void)setIsDeflated:;
+ (id)archiveEntry;
+ (id)archiveEntryWithCentralHeader:archiveData:;
@end
