@interface IESECCommentCarouselCell : UICollectionViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel commentContentView;
@property (nonatomic) UILabel quoteLabel;
@property (nonatomic) double iconWH;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commentContentView;
- (double)iconWH;
- (id)quoteLabel;
- (void)setCommentContentView:;
- (void)setQuoteLabel:;
- (void)updateUIWithModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)_setup;
- (id)iconImageView;
- (void)setIconImageView:;
@end
