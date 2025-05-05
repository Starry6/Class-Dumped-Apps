@interface IESECWinCommentCell : UICollectionViewCell
@property (nonatomic) UIImageView titleImageView;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) IESECWinAuthorCommentsView commentsView;
@property (nonatomic) @? clickImpressionWord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clickImpressionWord;
- (id)commentsView;
- (void)setClickImpressionWord:;
- (void)setCommentsView:;
- (void)tapCellWithImpressionWord:;
- (void)updateWithObject:;
- (id)titleImageView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setTitleImageView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
