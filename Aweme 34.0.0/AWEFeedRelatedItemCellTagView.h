@interface AWEFeedRelatedItemCellTagView : UIView
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIView containerView;
- (id)tagImageView;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setTagImageView:;
- (id)commentImage;
- (void)updateViewConstraints;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
- (id)starImage;
@end
