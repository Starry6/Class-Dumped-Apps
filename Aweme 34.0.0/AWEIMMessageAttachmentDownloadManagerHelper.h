@interface AWEIMMessageAttachmentDownloadManagerHelper : NSObject
@property (nonatomic) FBKVOController vmKVO;
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel downloadVM;
@property (nonatomic) AWEIMMessage message;
- (void)setDownloadVM:;
- (id)downloadVM;
- (BOOL)downloadFileWithMessage:remoteURL:optionalMD5:callback:;
- (void)setVmKVO:;
- (id)vmKVO;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
+ (void)attachmentExistsWithMessage:remoteURL:optionalMD5:callback:;
@end
