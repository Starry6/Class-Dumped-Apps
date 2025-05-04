@interface AWEPOIDetailRatingStarView : UIView
@property (nonatomic) UIImageView selectedStarView;
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) UIImageView unselectedStarView;
- (double)starHeight;
- (id)selectedStarView;
- (void)setSelectedStarView:;
- (id)unselectedStarView;
- (void)setUnselectedStarView:;
- (id)initWithFrame:style:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)maskLayer;
- (void)setMaskLayer:;
- (double)starWidth;
- (void)setPercent:;
@end
