@interface AWEPOIDetailRatingContainerView : UIView
@property (nonatomic) NSMutableArray stars;
@property (nonatomic) {CGSize=dd} startSize;
@property (nonatomic) Q style;
@property (nonatomic) UILabel ratingLabel;
@property (nonatomic) <AWEPOIDetailRatingContainerViewDelegate> delegate;
- (void)setStars:;
- (id)initWithFrame:style:showLabel:textFont:textColor:;
- (double)starSpace;
- (void)setStartSize:;
- (id)startSize;
- (id)delegate;
- (id)initWithFrame:style:;
- (id)initWithFrame:;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)ratingLabel;
- (id)stars;
- (void)setStyle:;
- (void)setRating:;
- (double)viewHeight;
- (void)handleTap:;
- (void)setRatingLabel:;
- (double)viewWidth;
+ (id)ratingSnapshotWithStyle:rating:textFont:textColor:;
+ (double)ratingViewWidthForStyle:rating:textFont:;
@end
