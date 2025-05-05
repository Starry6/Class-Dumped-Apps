@interface PFCachingArchiveIndex : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)indexFileVersion;
- (BOOL)loadIndexFile:fileSize:;
- (id)indexLabel;
- (BOOL)indexSupported;
- (id)archiveLineParserForIndexPath:;
- (BOOL)loadOrCreateIndex;
- (id)indexName;
- (id)dataArchivePath;
- (id)indexPath:;
- (BOOL)indexFileValid:;
- (BOOL)makeAndCacheIndexFileInDirectory:indexPath:;
- (BOOL)createIndexFromArchiveFile:tempIndexFile:;
- (unsigned int)architectureHash;
@end
