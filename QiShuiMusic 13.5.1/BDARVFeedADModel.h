@interface BDARVFeedADModel : NSObject
@property (nonatomic) q adType;
@property (nonatomic) q styleType;
@property (nonatomic) double scaleRate;
- (id)initWithAdType:styleType:scaleRate:;
- (double)scaleRate;
- (void)setScaleRate:;
- (void)setStyleType:;
- (long long)adType;
- (long long)styleType;
- (void)setAdType:;
@end
