@interface AWEAdCommentLeaveAlertDialogContentView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray tagList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descLabel;
- (void)setDescLabel:;
- (id)tagList;
- (void)setTagList:;
- (void)configViews;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setImageView:;
- (id)imageView;
@end
