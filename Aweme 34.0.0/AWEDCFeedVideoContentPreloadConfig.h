@interface AWEDCFeedVideoContentPreloadConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL enablePreloadVideo;
@property (nonatomic) q preloadSize;
@property (nonatomic) NSString bussinessID;
@property (nonatomic) BOOL enablePreloadImage;
@property (nonatomic) BOOL enableHitTestPreload;
@property (nonatomic) BOOL enableDidSelectPreload;
@property (nonatomic) double preloadDelayTime;
- (long long)preloadSize;
- (void)setPreloadSize:;
- (void)setEnablePreloadVideo:;
- (void)setBussinessID:;
- (void)setupDefaultConfig;
- (void)setEnablePreloadImage:;
- (void)setEnableHitTestPreload:;
- (void)setEnableDidSelectPreload:;
- (void)setPreloadDelayTime:;
- (BOOL)enablePreloadVideo;
- (id)bussinessID;
- (BOOL)enablePreloadImage;
- (BOOL)enableHitTestPreload;
- (BOOL)enableDidSelectPreload;
- (double)preloadDelayTime;
- (void).cxx_destruct;
@end
