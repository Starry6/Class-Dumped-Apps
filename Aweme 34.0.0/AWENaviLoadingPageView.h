@interface AWENaviLoadingPageView : UIView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWENaviProgressView progressView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateToProgress:duration:;
- (id)collectionView;
- (id)progressView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)setProgressView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
