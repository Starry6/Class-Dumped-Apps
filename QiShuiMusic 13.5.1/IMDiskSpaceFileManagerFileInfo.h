@interface IMDiskSpaceFileManagerFileInfo : IMDiskSpaceFileInfo
@property (nonatomic) Q purgableFlags;
@property (nonatomic) NSString purgableFlagsString;
- (void).cxx_destruct;
- (void)addLogItems:;
- (id)initWithPath:fileSize:isDirectory:isAttachment:isSticker:purgableFlags:;
- (unsigned long long)purgableFlags;
- (id)purgableFlagsString;
@end
