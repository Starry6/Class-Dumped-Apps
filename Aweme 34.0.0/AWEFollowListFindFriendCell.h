@interface AWEFollowListFindFriendCell : UICollectionViewCell
@property (nonatomic) BOOL isMine;
@property (nonatomic) UIView findFriendView;
- (id)findFriendView;
- (void)setFindFriendView:;
- (id)footerForFindFriend:isMine:;
- (void)findFriendsButtonTapped;
- (id)enterMethodForRecommend;
- (void)configCell:isMine:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (BOOL)isMine;
- (void)setIsMine:;
@end
