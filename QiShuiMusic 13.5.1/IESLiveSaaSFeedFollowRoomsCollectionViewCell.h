@interface IESLiveSaaSFeedFollowRoomsCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESLiveSaaSFeedFollowRoomView followRoomView;
@property (nonatomic) <HTSLiveSaaSFeedItem> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)followRoomView;
- (void)setFollowRoomView:;
- (id)item;
- (void)update:;
- (void)setTitleLabel:;
- (BOOL)showTitle;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
