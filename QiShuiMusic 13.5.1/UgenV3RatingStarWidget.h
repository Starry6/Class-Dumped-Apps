@interface UgenV3RatingStarWidget : UgenWidget
@property (nonatomic) UgenV3RatingStarView ratingStarView;
@property (nonatomic) NSString highlightColor;
@property (nonatomic) NSString lowlightColor;
@property (nonatomic) NSString score;
@property (nonatomic) NSString size;
@property (nonatomic) NSString gap;
- (id)lowlightColor;
- (id)ratingStarView;
- (long long)real_gap;
- (id)real_highlightColor;
- (id)real_lowlightColor;
- (double)real_score;
- (long long)real_size;
- (void)setLowlightColor:;
- (void)setRatingStarView:;
- (id)ugenView;
- (void)v3_render;
- (void)setHighlightColor:;
- (id)init;
- (id)gap;
- (id)score;
- (id)highlightColor;
- (void)setGap:;
- (void)setScore:;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
@end
