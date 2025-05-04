@interface AWEAdCommentFilterItemCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEAdFeedCommentFilterModel filterModel;
- (void)configViews;
- (void)setFilterModel:;
- (id)filterModel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
+ (id)lableFontWithModel:;
+ (id)lableTextWithModel:;
@end
