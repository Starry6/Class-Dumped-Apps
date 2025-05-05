@interface CSJStarView : UIView
@property (nonatomic) __CSJSartView starView;
@property (nonatomic) __CSJSartView emptyStarView;
@property (nonatomic) {CGSize=dd} starSize;
@property (nonatomic) double starMargin;
@property (nonatomic) double score;
- (id)emptyStarView;
- (void)setEmptyStarView:;
- (void)setStarMargin:;
- (void)setStarSize:;
- (void)setStarView:;
- (double)starMargin;
- (id)starView;
- (double)score;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)setScore:;
- (void).cxx_destruct;
- (id)starSize;
@end
