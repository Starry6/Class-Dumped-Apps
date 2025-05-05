@interface AWEIMMessageAttachmentDownloadManager : NSObject
@property (nonatomic) NSMutableDictionary downloaders;
- (void)setDownloaders:;
- (BOOL)__needRefreshURLForError:;
- (id)downloadFileWithMessage:resModel:optionalMD5:;
- (id)downloadFileWithMessage:subType:resModel:optionalMD5:;
- (id)downloaders;
- (id)keyOfMessageID:conversationID:subType:;
- (BOOL)linkLocalFileWithMessage:subType:resModel:MD5:;
- (void)p_fetchUrlModelWithTosKey:urlPath:completion:;
- (id)p_generateContextWithMessage:subType:;
- (void)p_realDownloadFile:targetPath:viewModel:key:secretKey:dbModel:md5:resModel:subType:;
- (BOOL)p_tryLocalLoopFileWithMessage:subType:MD5:dbModel:;
- (void)p_updateMessageExtOnMessage:withSubType:DBModel:;
- (void)removeDownloader:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
