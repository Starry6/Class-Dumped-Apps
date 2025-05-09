@interface AWESearchSynthesisNovelCatalogView : UIView
@property (nonatomic) AWESearchSynthesisNovelCatalogTopView topView;
@property (nonatomic) UIView separatorView;
@property (nonatomic) UIView topBlankView;
@property (nonatomic) AWESearchSynthesisNovelLoadingView loadingView;
@property (nonatomic) AWESearchSynthesisNovelFailView failView;
@property (nonatomic) UITableView contentTableView;
@property (nonatomic) AWESearchSynthesisNovelSlider slider;
@property (nonatomic) AWESearchSynthesisNovelBookSettingConfig configData;
@property (nonatomic) @? loadMoreHandler;
@property (nonatomic) NSString catalogUrl;
@property (nonatomic) AWESearchSynthesisNovelDataEngine novelDataEngine;
@property (nonatomic) <AWESearchSynthesisNovelCatalogViewDelegate> delegate;
@property (nonatomic) BOOL isAppendNativeReader;
@property (nonatomic) BOOL isReverse;
@property (nonatomic) BOOL isShowInWindow;
@property (nonatomic) AWESearchSynthesisNovelCatalogData catalogData;
@property (nonatomic) UIView onCatalogShowRightBackgroundView;
@property (nonatomic) UIImage loadImage;
@property (nonatomic) UIImage darkLoadImage;
@property (nonatomic) @? catalogViewLoadMoreConfigureBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentTableView;
- (void)setContentTableView:;
- (BOOL)isReverse;
- (void)setIsReverse:;
- (void)slider:valueDidChanged:;
- (void)setFailView:;
- (id)failView;
- (void)onCatalogBookDescClick;
- (void)onOrderClick;
- (void)updateWithCatalogData:;
- (long long)reverseIndex:;
- (void)onSliderValueChange:;
- (void)onChapterDataReady;
- (void)updateWithConfigData:;
- (void)setConfigData:;
- (void)setLoadMoreHandler:;
- (id)loadMoreHandler;
- (void)setLoadImage:;
- (void)configLoadMoreFooter;
- (id)catalogUrl;
- (void)setCatalogUrl:;
- (void)setTopBlankView:;
- (id)topBlankView;
- (BOOL)isAppendNativeReader;
- (void)reloadChapterWithIsJumpToCurrentChapter:;
- (void)loadChaptersJumpCurrentIndex:;
- (id)novelDataEngine;
- (void)loadmoreChapterList;
- (void)setDarkLoadImage:;
- (void)setCatalogViewLoadMoreConfigureBlock:;
- (void)setNovelDataEngine:;
- (void)setIsAppendNativeReader:;
- (BOOL)isShowInWindow;
- (void)setIsShowInWindow:;
- (id)onCatalogShowRightBackgroundView;
- (void)setOnCatalogShowRightBackgroundView:;
- (id)darkLoadImage;
- (id)catalogViewLoadMoreConfigureBlock;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)slider;
- (id)delegate;
- (void)setSlider:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void)setSeparatorView:;
- (void)scrollViewDidScroll:;
- (id)loadImage;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)separatorView;
- (id)topView;
- (void)setTopView:;
- (id)configData;
- (id)catalogData;
@end
