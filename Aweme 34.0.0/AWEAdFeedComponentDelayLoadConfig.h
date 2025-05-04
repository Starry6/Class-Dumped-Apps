@interface AWEAdFeedComponentDelayLoadConfig : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) q delayTime;
@property (nonatomic) q thresholdTime;
@property (nonatomic) BOOL useSlideSpeedModel;
- (void)setThresholdTime:;
- (void)setUseSlideSpeedModel:;
- (long long)thresholdTime;
- (BOOL)useSlideSpeedModel;
- (BOOL)enable;
- (id)init;
- (void)setDelayTime:;
- (long long)delayTime;
- (void)setEnable:;
@end
