@interface IESLiveSaaSFeedPlaceholderCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView leftLineView;
@property (nonatomic) UIView rightLineView;
@property (nonatomic) <HTSLiveSaaSFeedItem> item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)leftLineView;
- (void)remakeConstraints:;
- (id)rightLineView;
- (void)setLeftLineView:;
- (void)setRightLineView:;
- (id)item;
- (void)update:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupViews;
@end
