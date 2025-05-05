@interface CSJUgenRatingStarWidget : UgenWidget
@property (nonatomic) CSJUgenRatingStarView ratingStarView;
@property (nonatomic) double starHeight;
@property (nonatomic) double score;
@property (nonatomic) double size;
- (void)bindAttributeValue:forKey:;
- (id)ratingStarView;
- (void)setRatingStarView:;
- (void)setStarHeight:;
- (double)starHeight;
- (id)ugenView;
- (id)init;
- (double)score;
- (void)layout;
- (void)setScore:;
- (void).cxx_destruct;
- (void)setSize:;
- (double)size;
- (void)render;
@end
