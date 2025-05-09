@interface AWEScreenShootShareFriendsCell : UICollectionViewCell
@property (nonatomic) UIView imageBackView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) AWEScreenShootShareViewGroupModel groupModel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)titleLable;
- (void)setTitleLable:;
- (void)setGroupModel:;
- (id)groupModel;
- (void)setImageBackView:;
- (id)imageBackView;
- (void)p_shareCellLongPressWithViewModel:cell:gesture:listModel:;
- (void)shareTofriendsWithIndexPath:;
- (void)shareMorefriends;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (void)setUpCollectionView;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setImageView:;
- (id)imageView;
- (void)setUpUI;
@end
