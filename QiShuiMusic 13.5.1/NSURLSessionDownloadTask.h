@interface NSURLSessionDownloadTask : NSURLSessionTask
- (id)init;
- (void)cancelByProducingResumeData:;
+ (id)new;
@end
