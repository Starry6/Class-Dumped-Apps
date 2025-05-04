@interface AWELiveVSUserStatics : AWEBaseApiModel
@property (nonatomic) q watchDuration;
@property (nonatomic) double watchRatio;
- (long long)watchDuration;
- (void)setWatchDuration:;
- (double)watchRatio;
- (void)setWatchRatio:;
+ (id)JSONKeyPathsByPropertyKey;
@end
