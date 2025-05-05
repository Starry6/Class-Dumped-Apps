@interface CKDownloadCompletionModel : NSObject
@property (nonatomic) DownloadResultNotification notificationInfo;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) NSString filePath;
@property (nonatomic) Q fileSize;
@property (nonatomic) double downloadDuration;
- (void)setExtraInfo:;
- (id)filePath;
- (unsigned long long)fileSize;
- (id)notificationInfo;
- (void)setNotificationInfo:;
- (void)setError:;
- (void)setFilePath:;
- (id)error;
- (void)setFileSize:;
- (void).cxx_destruct;
- (id)extraInfo;
- (double)downloadDuration;
- (void)setDownloadDuration:;
+ (id)initWithNotificationInfo:;
@end
