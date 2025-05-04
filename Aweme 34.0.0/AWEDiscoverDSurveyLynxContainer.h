@interface AWEDiscoverDSurveyLynxContainer : AWEDiscoverDFeedLynxContainer
@property (nonatomic) AWEAwemeModel model;
- (void)updateData:extraParams:;
- (void)trackLoadResultWithURL:error:;
- (void)trackFELoadResult:isSuccess:;
- (double)loadStartTime;
- (void)setLoadStartTime:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)templateURL;
@end
