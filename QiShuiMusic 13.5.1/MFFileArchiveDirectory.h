@interface MFFileArchiveDirectory : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSData contents;
@property (nonatomic) NSError error;
- (id)url;
- (id)contents;
- (id)error;
- (void)setUrl:;
- (void)setContents:;
- (void).cxx_destruct;
- (id)description;
- (id)archiveEntries;
- (BOOL)inputWithURL:;
- (BOOL)inputWithData:;
- (id)mainEntry;
- (void)setMainEntry:;
- (void)_scrubContentDirectory;
- (id)scrubbedArchiveEntries;
- (BOOL)setArchiveEntry:;
+ (id)archiveDirectory;
+ (id)rangeOfCentralDirectoryInData:;
+ (id)_entriesFromCentralDictionary:inData:archiveData:;
+ (id)_centralHeader:;
+ (id)_centralDirectory:;
+ (id)_rangeOfCentralDirectory:;
+ (BOOL)_hasZipSignature:;
@end
