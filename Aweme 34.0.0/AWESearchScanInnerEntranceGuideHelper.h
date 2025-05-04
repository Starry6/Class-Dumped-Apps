@interface AWESearchScanInnerEntranceGuideHelper : NSObject
@property (nonatomic) q modelAppearTimes;
- (BOOL)shouldShield:;
- (long long)syncGetInnerScanEntranceGuideFreq;
- (void)updateModelAppearTimes;
- (BOOL)isModelAppearTimesOverFreq;
- (void)resetAppearTimes;
- (void)trackShowSearchIconPop:;
- (long long)modelAppearTimes;
- (void)setModelAppearTimes:;
- (long long)getModelAppearTimes;
@end
