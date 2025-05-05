@interface PLCPLDownloadContext : NSObject
@property (nonatomic) NSString taskIdentifier;
@property (nonatomic) NSString resourceTypeDescription;
@property (nonatomic) double progress;
@property (nonatomic) BOOL completed;
@property (nonatomic) NSError error;
@property (nonatomic) double updateLastQueuedTime;
- (id)taskIdentifier;
- (void)setCompleted:;
- (void)setError:;
- (void)setProgress:;
- (id)error;
- (double)progress;
- (void).cxx_destruct;
- (id)description;
- (BOOL)completed;
- (void)setTaskIdentifier:;
- (void)updateFromDownloadStatusUserInfo:;
- (id)resourceTypeDescription;
- (void)setResourceTypeDescription:;
- (double)updateLastQueuedTime;
- (void)setUpdateLastQueuedTime:;
@end
