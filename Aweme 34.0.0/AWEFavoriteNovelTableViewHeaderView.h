@interface AWEFavoriteNovelTableViewHeaderView : UIView
@property (nonatomic) UILabel myBookShelfLabel;
@property (nonatomic) UIView moreView;
@property (nonatomic) UILabel moreLabel;
@property (nonatomic) UIImageView moreIcon;
@property (nonatomic) @? clickMoreBook;
- (id)moreIcon;
- (id)moreView;
- (void)setMoreView:;
- (void)setMoreIcon:;
- (void)setClickMoreBook:;
- (id)myBookShelfLabel;
- (id)clickMoreBook;
- (void)onClickMore;
- (void)setMyBookShelfLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)moreLabel;
- (void)setMoreLabel:;
- (void)setupViews;
@end
