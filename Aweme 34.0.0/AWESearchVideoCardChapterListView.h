@interface AWESearchVideoCardChapterListView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIImageView allBtnGradientImageView;
@property (nonatomic) UIButton allBtn;
@property (nonatomic) NSArray chapterList;
@property (nonatomic) q selectedIndex;
@property (nonatomic) BOOL hasScroll;
@property (nonatomic) BOOL allowHandlePlayedTime;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) @? chapterInfoDidClick;
@property (nonatomic) @? chapterListAllBtnClick;
@property (nonatomic) @? chapterListGetCurrentPlayedTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtra:;
- (id)logExtra;
- (double)currentPlayTime;
- (id)chapterList;
- (void)setCurrentPlayTime:;
- (void)setChapterList:;
- (BOOL)allowHandlePlayedTime;
- (void)setAllowHandlePlayedTime:;
- (void)scrollToIndex:animation:;
- (void)configDataWithChapterList:;
- (void)changeChapterWithTime:needScroll:;
- (void)setChapterInfoDidClick:;
- (void)setChapterListAllBtnClick:;
- (void)setChapterListGetCurrentPlayedTime:;
- (id)allBtnGradientImageView;
- (id)allBtn;
- (BOOL)fixChapterListCrash;
- (void)updateSelectedCellWithIndex:needScroll:animated:;
- (id)chapterListGetCurrentPlayedTime;
- (id)chapterInfoDidClick;
- (id)chapterListAllBtnClick;
- (void)allBtnAction;
- (void)setAllBtnGradientImageView:;
- (void)setAllBtn:;
- (id)collectionView;
- (id)init;
- (void)setSelectedIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void)scrollViewDidScroll:;
- (long long)selectedIndex;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setupUI;
- (BOOL)hasScroll;
- (void)setHasScroll:;
+ (BOOL)fixChapterListCrashV2;
@end
