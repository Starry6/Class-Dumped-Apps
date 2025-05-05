@interface DAMailboxFetchSearchResultRequest : NSObject
@property (nonatomic) NSString longID;
@property (nonatomic) NSString folderID;
@property (nonatomic) NSString serverID;
@property (nonatomic) NSInteger bodyFormat;
@property (nonatomic) NSInteger maxSize;
- (int)maxSize;
- (void)setMaxSize:;
- (id)folderID;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setFolderID:;
- (id)serverID;
- (void)setServerID:;
- (id)longID;
- (int)bodyFormat;
- (id)initRequestForBodyFormat:withFolderID:withServerID:withLongID:withBodySizeLimit:;
- (void)setBodyFormat:;
- (id)initRequestForBodyFormat:withLongID:withBodySizeLimit:;
- (void)setLongID:;
@end
