@interface AWEIMMessageAttachmentDownloadManagerHelper : NSObject
@property (nonatomic) FBKVOController vmKVO;
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel downloadVM;
@property (nonatomic) AWEIMMessage message;
- (BOOL)downloadFileWithMessage:remoteURL:optionalMD5:callback:;
- (id)downloadVM;
- (void)setDownloadVM:;
- (void)setVmKVO:;
- (id)vmKVO;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
+ (void)attachmentExistsWithMessage:remoteURL:optionalMD5:callback:;
@end
