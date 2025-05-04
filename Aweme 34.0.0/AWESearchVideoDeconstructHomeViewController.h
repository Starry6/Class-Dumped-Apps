@interface AWESearchVideoDeconstructHomeViewController : AWESearchVideoDeconstructResultViewController
@property (nonatomic) AWESearchVideoDeconstructGuessWordView guessWordView;
@property (nonatomic) double scrollViewPreviousOffsetY;
@property (nonatomic) BOOL guessWordViewIsPresent;
@property (nonatomic) BOOL pageDidAppear;
- (id)aweui_emptyPageEdgeInsets;
- (void)feedDidScroll:;
- (BOOL)pageDidAppear;
- (void)setPageDidAppear:;
- (void)trackTrendingWordsClickEntity:index:;
- (void)trackTrendingWordsShowEntity:index:;
- (void)handleSearchKeywordDidChangedNotification:;
- (void)handleSearchKeywordDidChanged:paramToPredictFetch:;
- (void)setupGuessWordView;
- (void)setupCachalotView;
- (BOOL)guessWordViewIsPresent;
- (id)guessWordView;
- (void)setScrollViewPreviousOffsetY:;
- (void)setGuessWordViewIsPresent:;
- (void)trackTrendingShowEntity:wordsNum:;
- (double)scrollViewPreviousOffsetY;
- (void)guessWordViewZoomOffset:;
- (void)setGuessWordView:;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
@end
