@interface AVPlaybackRateCollection : AVPlaybackSpeedCollection
@property (nonatomic) NSArray rates;
@property (nonatomic) AVPlaybackRate selectedRate;
- (void)setSelectedRate:;
- (id)selectedRate;
- (id)rates;
- (void)selectNextPlaybackRate:;
+ (id)collectionWithRates:;
+ (id)collectionWithDefaultRates;
@end
