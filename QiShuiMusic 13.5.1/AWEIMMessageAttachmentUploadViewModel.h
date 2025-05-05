@interface AWEIMMessageAttachmentUploadViewModel : NSObject
@property (nonatomic) BOOL canceled;
@property (nonatomic) NSString fileID;
@property (nonatomic) NSError error;
@property (nonatomic) double progress;
@property (nonatomic) Q status;
@property (nonatomic) AWEIMUploadFileResponse response;
- (void)setFileID:;
- (id)fileID;
- (void)setStatus:;
- (void)setError:;
- (void)setProgress:;
- (id)error;
- (double)progress;
- (id)response;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setResponse:;
- (void)setCanceled:;
- (BOOL)canceled;
@end
