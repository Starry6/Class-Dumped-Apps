@interface AWEVideoDiskCacheConfiguration : NSObject
@property (nonatomic) Q costLimit;
@property (nonatomic) Q autoTrimInterval;
@property (nonatomic) BOOL fileLogEnabled;
@property (nonatomic) @? URLStringToCacheKey;
@property (nonatomic) @? Reporter;
@property (nonatomic) <AWEVideoCDNRequestDelegate> CDNTrackDelegate;
@property (nonatomic) <AWEVideoDownloadDelegate> videoDownloadDelegate;
@property (nonatomic) # networkUtilityClass;
@property (nonatomic) <AWEVideoPlayerLoggerDelegate> loggerDelegate;
@property (nonatomic) Q disableAutoTrimFileLifeTime;
- (id)loggerDelegate;
- (void)setLoggerDelegate:;
- (Class)networkUtilityClass;
- (id)CDNTrackDelegate;
- (id)videoDownloadDelegate;
- (id)Reporter;
- (unsigned long long)autoTrimInterval;
- (unsigned long long)costLimit;
- (void)setCostLimit:;
- (void)setAutoTrimInterval:;
- (BOOL)fileLogEnabled;
- (void)setFileLogEnabled:;
- (id)URLStringToCacheKey;
- (void)setURLStringToCacheKey:;
- (void)setCDNTrackDelegate:;
- (void)setVideoDownloadDelegate:;
- (void)setNetworkUtilityClass:;
- (void)setDisableAutoTrimFileLifeTime:;
- (unsigned long long)disableAutoTrimFileLifeTime;
- (id)init;
- (void).cxx_destruct;
- (void)setReporter:;
+ (id)sharedInstance;
@end
