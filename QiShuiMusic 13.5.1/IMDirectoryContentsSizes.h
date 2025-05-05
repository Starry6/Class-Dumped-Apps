@interface IMDirectoryContentsSizes : NSObject
@property (nonatomic) {IMFileSize=QQ} totalSize;
@property (nonatomic) {IMFileSize=QQ} totalPurgableSize;
@property (nonatomic) {IMFileSize=QQ} totalAttachmentSize;
- (id)totalSize;
- (id)initWithDirectoryContents:;
- (id)totalAttachmentSize;
- (id)totalPurgableSize;
@end
