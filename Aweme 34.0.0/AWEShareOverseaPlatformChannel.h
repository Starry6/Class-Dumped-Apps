@interface AWEShareOverseaPlatformChannel : AWEShareBaseChannel
@property (nonatomic) AWEShareBaseChannel downloadChannel;
@property (nonatomic) q sharePlatform;
- (void)finishWithDownloadResult:completion:;
- (long long)sharePlatform;
- (void)shareWithCompletion:;
- (id)shareImage;
- (BOOL)prepareToShare;
- (id)trackingLabel;
- (id)downloadChannel;
- (BOOL)isShareItemEnabled;
- (id)channelConfigs;
- (void)setDownloadChannel:;
- (id)initWithPlatform:;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (id)channelWithType:;
@end
