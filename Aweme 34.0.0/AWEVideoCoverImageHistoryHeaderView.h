@interface AWEVideoCoverImageHistoryHeaderView : UICollectionReusableView
@property (nonatomic) UIView leftLineView;
@property (nonatomic) UIView rightLineView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL isEmpty;
- (void)p_setupUI;
- (id)leftLineView;
- (id)rightLineView;
- (void)setLeftLineView:;
- (void)setRightLineView:;
- (void)p_setupConstraint;
- (id)initWithFrame:;
- (void)setIsEmpty:;
- (BOOL)isEmpty;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
