@interface AWEIMMessageAttachmentUploadManager : NSObject
@property (nonatomic) NSMutableDictionary uploaders;
@property (nonatomic) NSMutableDictionary uploadersHolder;
@property (nonatomic) NSMutableArray waitingQueue;
@property (nonatomic) BOOL concurrentUpload;
- (void)removeUploader:;
- (id)uploadersHolder;
- (void)cancelUploadFile:;
- (BOOL)concurrentUpload;
- (id)createUploadFileVM:;
- (id)p_uploadFileWithFileID:quickData:messageType:;
- (void)setConcurrentUpload:;
- (void)setUploaders:;
- (void)setUploadersHolder:;
- (void)setWaitingQueue:;
- (id)uploadFileWithFileID:quickData:messageType:;
- (void)uploadNext;
- (id)uploadVMWithFileID:;
- (id)uploaders;
- (id)waitingQueue;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isUploading;
+ (id)sharedInstance;
@end
