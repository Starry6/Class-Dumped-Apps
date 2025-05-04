@interface AWEMVNewPreloadVideoManager : NSObject
@property (nonatomic) NSMutableDictionary preloadingMap;
- (id)preloadConfig;
- (void)cancelAllPreloadVideo;
- (void)cancelPreloadVideo:;
- (void)tryPreloadSamllCard:;
- (void)cancelAllPreloadVideoExcept:;
- (void)tryPreloadLargeCard:;
- (void)tryPreloadVideos:;
- (long long)smallCardPreloadSize:;
- (void)tryPreloadVideo:preloadSize:priorityLevel:;
- (long long)largeCardPreloadSize:;
- (id)preloadingMap;
- (long long)defalutPreloadKb;
- (long long)maxPreloadKb;
- (void)startPreloadVideo:preloadSize:group:priorityLevel:successBlock:failureBlock:cancelBlock:;
- (void)cancelPreloadVideoWithGroup:;
- (long long)smallCardPreloadKb;
- (long long)smallCardPreloadSecond;
- (long long)preloadSizeWithModel:second:defaultPreloadSize:;
- (long long)largeCardPreloadKb;
- (long long)largeCardPreloadSecond;
- (void)setPreloadingMap:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
