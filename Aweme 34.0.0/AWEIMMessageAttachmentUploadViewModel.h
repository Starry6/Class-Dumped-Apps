@interface AWEIMMessageAttachmentUploadViewModel : NSObject
@property (nonatomic) q duration;
@property (nonatomic) BOOL canceled;
@property (nonatomic) NSString fileID;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString taskID;
@property (nonatomic) NSArray filePaths;
@property (nonatomic) NSError error;
@property (nonatomic) @? onFinish;
@property (nonatomic) NSString vmID;
@property (nonatomic) double progress;
@property (nonatomic) Q status;
@property (nonatomic) AWEIMUploadFileResponse response;
@property (nonatomic) AWEIMUploadManyFilesResponse responses;
- (id)vmID;
- (BOOL)canceled;
- (id)filePath;
- (id)responses;
- (void)setFileID:;
- (id)fileID;
- (id)filePaths;
- (void)setStatus:;
- (void)setError:;
- (void)setDuration:;
- (double)progress;
- (id)response;
- (void)setCanceled:;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)error;
- (void)setResponse:;
- (long long)duration;
- (unsigned long long)status;
- (void)setTaskID:;
- (id)taskID;
- (void)setProgress:;
- (void)setResponses:;
- (void)setFilePaths:;
- (id)onFinish;
- (void)setOnFinish:;
@end
