@interface AWEPlayInteractionVideoHorizontalView : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) double labelWidth;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) <AWEPlayInteractionBottomButtonViewDelegateProtocol> delegate;
@property (nonatomic) @? clickVideoAbstractBtnBlock;
@property (nonatomic) q selecteIndex;
@property (nonatomic) double offsetX;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)currentPlayTime;
- (void)setCurrentPlayTime:;
- (id)formattedJumpTimeForTime:;
- (void)updateSectionBtnWithPlayTime:completion:;
- (void)updateWithModel:LabelWidth:hasClicked:;
- (void)setClickVideoAbstractBtnBlock:;
- (void)setSelecteIndex:;
- (long long)selecteIndex;
- (id)clickVideoAbstractBtnBlock;
- (double)cellWidthWithString:;
- (void)setModel:;
- (id)collectionView;
- (id)init;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (id)model;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)description;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (id)dataArray;
- (void)setupUI;
- (double)labelWidth;
- (void)setLabelWidth:;
- (void)setDataArray:;
- (double)offsetX;
+ (BOOL)hitChapterUIOptimizeExp;
+ (BOOL)hitMultiClicksResetPlayExp;
@end
