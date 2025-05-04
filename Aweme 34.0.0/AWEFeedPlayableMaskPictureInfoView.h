@interface AWEFeedPlayableMaskPictureInfoView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEFeedPlayableMaskPictureInfoModel pictureInfo;
@property (nonatomic) @? pictureDidClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (void)constraintSubviews;
- (BOOL)canHandleGestureInCell:;
- (void)setPictureInfo:;
- (id)pictureInfo;
- (id)pictureDidClick;
- (void)setPictureDidClick:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)titleLabel;
- (double)viewHeight;
@end
