@interface BDAnimatedPreferredFrameRateRange : NSObject
@property (nonatomic) float minimumRate;
@property (nonatomic) float maximumRate;
@property (nonatomic) float preferredRate;
- (void)setMinimumRate:;
- (void)setMaximumRate:;
- (void)setPreferredRate:;
- (float)preferredRate;
- (float)maximumRate;
- (float)minimumRate;
+ (id)preferredFrameRateRangeWithMinimumRate:maximumRate:preferredRate:;
@end
