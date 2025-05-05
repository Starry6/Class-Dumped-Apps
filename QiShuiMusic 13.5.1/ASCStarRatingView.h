@interface ASCStarRatingView : UIView
@property (nonatomic) double rating;
@property (nonatomic) q maxNumberOfStars;
@property (nonatomic) q starSize;
@property (nonatomic) ASCStarRow hollowStarRowView;
@property (nonatomic) ASCStarRow filledStarRowView;
@property (nonatomic) UIColor starColor;
- (double)rating;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)encodeWithCoder:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setRating:;
- (id)measurementsWithFitting:in:;
- (id)initWithMaxNumberOfStars:starSize:andFill:;
- (id)sizeWithStarSize:andNumberOfStars:;
- (long long)maxNumberOfStars;
- (long long)starSize;
- (id)hollowStarRowView;
- (id)filledStarRowView;
- (id)starColor;
+ (id)greyFill;
@end
