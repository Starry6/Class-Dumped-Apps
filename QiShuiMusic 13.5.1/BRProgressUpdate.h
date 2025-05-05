@interface BRProgressUpdate : NSObject
@property (nonatomic) BRFileObjectID folderID;
@property (nonatomic) Q uploadCompletedSize;
@property (nonatomic) Q uploadTotalSize;
@property (nonatomic) Q downloadCompletedSize;
@property (nonatomic) Q downloadTotalSize;
@property (nonatomic) NSArray parentFileIDs;
- (id)folderID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)parentFileIDs;
- (void)setParentFileIDs:;
- (void)setFolderID:;
- (unsigned long long)uploadCompletedSize;
- (void)setUploadCompletedSize:;
- (unsigned long long)uploadTotalSize;
- (void)setUploadTotalSize:;
- (unsigned long long)downloadCompletedSize;
- (void)setDownloadCompletedSize:;
- (unsigned long long)downloadTotalSize;
- (void)setDownloadTotalSize:;
+ (BOOL)supportsSecureCoding;
@end
