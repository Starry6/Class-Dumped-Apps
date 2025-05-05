@interface ASCStarRow : UIView
@property (nonatomic) double numberOfStarsInRow;
@property (nonatomic) UIImageView starImageView;
@property (nonatomic) double maxNumberOfStars;
@property (nonatomic) CAReplicatorLayer starLayer;
@property (nonatomic) q starSize;
@property (nonatomic) UIColor starColor;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (double)maxNumberOfStars;
- (long long)starSize;
- (id)starColor;
- (id)initWithStarSize:fill:starColor:andMaxNumberOfStars:;
- (void)setNumberOfStarsInRow:;
- (void)modifyStarLayerRectToHideOuterPaddingUsing:;
- (id)frameForCurrentRating:andStarSize:;
- (double)numberOfStarsInRow;
- (id)starImageView;
- (id)starLayer;
+ (id)sizeForStarRowWithSizeOfStar:andNumberOfStars:;
+ (id)starForSize:withFill:;
@end
