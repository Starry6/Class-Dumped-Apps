@interface AWELandscapeChapterView : UIView
@property (nonatomic) UICollectionViewFlowLayout collectionViewLayout;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) double maxSpace;
@property (nonatomic) NSArray chapterList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UICollectionView collectionView;
- (void)configWithModel:;
- (id)chapterList;
- (void)__configSubviews;
- (double)__calculateMaxSpace;
- (void)setMaxSpace:;
- (id)__textRectWithChapterInfo:font:;
- (double)maxSpace;
- (void)setModel:;
- (id)collectionView;
- (id)init;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (id)model;
- (id)collectionViewLayout;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setCollectionViewLayout:;
@end
