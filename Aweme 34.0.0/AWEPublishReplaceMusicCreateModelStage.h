@interface AWEPublishReplaceMusicCreateModelStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) AWEPublishEditVideoRequestModel requestModel;
@property (nonatomic) q publishRetryCount;
@property (nonatomic) q maxRetryCount;
@property (nonatomic) double retryInterval;
- (void)setupWithModel:;
- (id)publishViewModel;
- (BOOL)canRetryWithError:;
- (void)setRequestModel:;
- (void)setPublishViewModel:;
- (id)createRequestModel;
- (void)p_run;
- (void)setPublishRetryCount:;
- (long long)publishRetryCount;
- (BOOL)isForbidden:;
- (id)publishAweme:completion:;
- (void)setMaxRetryCount:;
- (long long)maxRetryCount;
- (void)run;
- (id)requestModel;
- (id)initWithModel:;
- (void).cxx_destruct;
- (double)retryInterval;
- (void)setRetryInterval:;
@end
