@interface AWEStudioAwemeDownloadTask : NSObject
@property (nonatomic) double receivedImageCount;
@property (nonatomic) double expectedImageCount;
@property (nonatomic) NSURLSessionDownloadTask task;
@property (nonatomic) Q status;
@property (nonatomic) q taskCount;
@property (nonatomic) NSNumber progressValue;
@property (nonatomic) double progress;
- (double)receivedImageCount;
- (double)expectedImageCount;
- (void)setTaskCount:;
- (void)setReceivedImageCount:;
- (void)setExpectedImageCount:;
- (void)setTask:;
- (id)progressValue;
- (void)setStatus:;
- (id)task;
- (double)progress;
- (BOOL)isCancelled;
- (void)cancel;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setProgressValue:;
- (long long)taskCount;
+ (id)fakeTaskWithStatus:;
@end
