@interface AWEMotionItemConfig : NSObject
@property (nonatomic) double shakeThreshold;
@property (nonatomic) q shakeMatchCount;
- (void)setShakeThreshold:;
- (void)setShakeMatchCount:;
- (double)shakeThreshold;
- (long long)shakeMatchCount;
@end
