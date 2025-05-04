@interface AWESearchVideoDeconstructSugViewController : AWESearchScanGraphicSugViewController
@property (nonatomic) AWESearchVideoDeconstructDataContext dataContext;
- (id)dataContext;
- (void)setDataContext:;
- (void)sugTableViewShow:;
- (void)fetchSugWords;
- (void)trackTrendingShowWordsNum:;
- (void)trackTrendingWordsShowWithModel:andIndex:;
- (void)fetchSugWordsWithParams:;
- (id)buildWordSourceModelsWithJSONObject:;
- (BOOL)checkIsEmptyContent:;
- (id)initWithDataContext:andConfig:;
- (void)trackTrendingWordsClickWithModel:index:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
