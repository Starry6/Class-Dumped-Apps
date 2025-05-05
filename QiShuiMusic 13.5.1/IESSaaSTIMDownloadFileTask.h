@interface IESSaaSTIMDownloadFileTask : NSObject
@property (nonatomic) NSURL remoteUrl;
@property (nonatomic) NSURL localURL;
@property (nonatomic) NSProgress progress;
@property (nonatomic) BOOL finished;
@property (nonatomic) NSURLSessionDownloadTask downloadTask;
@property (nonatomic) NSError error;
@property (nonatomic) @? validateDownloadedContent;
@property (nonatomic) @ userInfo;
- (id)remoteUrl;
- (void)setRemoteUrl:;
- (void)setValidateDownloadedContent:;
- (id)validateDownloadedContent;
- (void)setFinished:;
- (id)init;
- (id)userInfo;
- (BOOL)finished;
- (void)setError:;
- (void)setProgress:;
- (id)error;
- (id)progress;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)downloadTask;
- (void)setDownloadTask:;
- (id)localURL;
- (void)setLocalURL:;
@end
