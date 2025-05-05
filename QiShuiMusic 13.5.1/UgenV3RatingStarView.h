@interface UgenV3RatingStarView : UIView
@property (nonatomic) double itemWidth;
@property (nonatomic) double gap;
@property (nonatomic) UIView hightlightView;
@property (nonatomic) UIView lowlightView;
- (id)hightlightView;
- (id)lowlightView;
- (void)p_addStarViewIntoView:tintColor:;
- (double)real_height;
- (double)real_width;
- (void)setHightlightView:;
- (void)setLowlightView:;
- (void)updateWithScore:itemWidth:gap:highlightColor:lowlightColor:;
- (double)gap;
- (void)setGap:;
- (id)initWithFrame:;
- (void)setItemWidth:;
- (double)itemWidth;
- (id)sizeThatFits:;
- (void).cxx_destruct;
@end
