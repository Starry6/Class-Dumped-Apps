@interface AWEAdLongVideoContainerViewModel : NSObject
@property (nonatomic) AWELongVideoAdPageContext pageContext;
@property (nonatomic) NSArray videoInfos;
@property (nonatomic) double allAdVideoDisplayDuration;
@property (nonatomic) double skipAdSeconds;
@property (nonatomic) <AWEHttpTask> httpTask;
@property (nonatomic) NSError netWorkError;
- (id)videoInfos;
- (void)setHttpTask:;
- (id)httpTask;
- (void)startFetchLongVideoAdBannerData:;
- (id)netWorkError;
- (double)allAdVideoDisplayDuration;
- (double)skipAdSeconds;
- (void)setSkipAdSeconds:;
- (void)refreshViewModelWithPageContext:;
- (void)setNetWorkError:;
- (void)startFetchLongVideoAdData;
- (double)adLongVideoRequestTimoutLimit;
- (id)longVideoBaseURL;
- (void)setAllAdVideoDisplayDuration:;
- (long long)adVideoDurationLimit;
- (void)setVideoInfos:;
- (void)trackBannerRequestEndEvent:reason:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
