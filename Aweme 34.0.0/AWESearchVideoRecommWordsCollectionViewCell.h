@interface AWESearchVideoRecommWordsCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView searchIconView;
@property (nonatomic) UIImageView wordImageView;
@property (nonatomic) NSString imageUrl;
- (void)buildViews;
- (id)wordImageView;
- (void)setWordImageView:;
- (id)searchIconView;
- (void)updateWithText:withImage:;
- (void)setSearchIconView:;
- (id)textLabel;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (id)imageUrl;
- (void)setImageUrl:;
+ (double)itemWidthWithText:;
+ (double)itemWidthWithText:withImage:;
+ (id)identifier;
@end
