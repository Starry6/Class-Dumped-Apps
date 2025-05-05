@interface QLZipArchiveEntry : NSObject
@property (nonatomic) ^{archive_entry=} entry;
@property (nonatomic) QLZipArchive archive;
@property (nonatomic) NSData data;
@property (nonatomic) NSURL url;
- (id)url;
- (id)data;
- (id)entry;
- (void).cxx_destruct;
- (void)setData:;
- (void)setEntry:;
- (id)readDataWithError:;
- (id)archive;
- (void)setArchive:;
@end
