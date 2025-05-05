@interface BDALokiProfile : NSObject
@property (nonatomic) NSDate templateStartDate;
@property (nonatomic) NSDate pageStarLoadtDate;
@property (nonatomic) NSDate templateParseFinishDate;
@property (nonatomic) NSDate createComponentTreeFinishDate;
- (void)didStartLoading;
- (id)createComponentTreeFinishDate;
- (void)didFirstScreen;
- (void)finishFetchResource:;
- (void)finishLoadWithUrl;
- (id)initWithLokiModel:customTrackData:;
- (void)jsRuntimeReady;
- (id)pageStarLoadtDate;
- (void)renderFail:errorMsg:;
- (void)sendLoadState:isError:;
- (void)setCreateComponentTreeFinishDate:;
- (void)setPageStarLoadtDate:;
- (void)setTemplateParseFinishDate:;
- (void)setTemplateStartDate:;
- (void)sheoCreateComponentTreeFinish;
- (void)sheoTemplateParseFinish;
- (void)showFinish;
- (void)startFetchResource;
- (id)templateParseFinishDate;
- (id)templateStartDate;
- (int)timeIntervalSinceStartLoad;
- (void).cxx_destruct;
@end
