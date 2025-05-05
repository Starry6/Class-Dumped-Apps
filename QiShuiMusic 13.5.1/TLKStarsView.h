@interface TLKStarsView : TLKStackView
@property (nonatomic) double currentStarRating;
@property (nonatomic) double starRating;
@property (nonatomic) UIFont font;
@property (nonatomic) BOOL useCompactMode;
- (id)init;
- (void)setFont:;
- (void).cxx_destruct;
- (id)font;
- (void)setStarRating:;
- (double)starRating;
- (BOOL)useCompactMode;
- (void)setUseCompactMode:;
- (void)updateStarImages;
- (double)currentStarRating;
- (void)setCurrentStarRating:;
@end
