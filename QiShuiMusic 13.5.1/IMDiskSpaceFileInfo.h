@interface IMDiskSpaceFileInfo : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) {IMFileSize=QQ} fileSize;
@property (nonatomic) BOOL isAttachment;
@property (nonatomic) BOOL isPurgableOnDisk;
@property (nonatomic) BOOL isDirectory;
@property (nonatomic) BOOL isSticker;
@property (nonatomic) NSString guid;
- (BOOL)isDirectory;
- (id)fileSize;
- (id)path;
- (void)log;
- (id)logString;
- (void).cxx_destruct;
- (id)guid;
- (BOOL)isAttachment;
- (BOOL)isPurgableOnDisk;
- (BOOL)isSticker;
- (id)initWithPath:fileSize:isDirectory:isAttachment:isSticker:isPurgableOnDisk:;
- (void)addLogItems:;
@end
