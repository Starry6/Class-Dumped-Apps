@interface AWEIMMessageFilePreviewTracker : NSObject
@property (nonatomic) AWEIMFileMessage fileMessage;
@property (nonatomic) double beginDownloadTimeInSec;
- (void)trackClickDownload;
- (id)initWithFileMessage:;
- (id)p_commonParams;
- (id)fileMessage;
- (void)trackClickShareAction;
- (void)setFileMessage:;
- (void)setBeginDownloadTimeInSec:;
- (double)beginDownloadTimeInSec;
- (void)trackShow:;
- (void)trackClickOpenOthers;
- (void)trackBeginDownload;
- (void)trackDownloadFinishWithDecryptDuration:;
- (void)trackDownloadFail:;
- (void).cxx_destruct;
@end
