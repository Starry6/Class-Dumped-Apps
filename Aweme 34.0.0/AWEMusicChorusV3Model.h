@interface AWEMusicChorusV3Model : AWEBaseApiModel
@property (nonatomic) q startTime;
@property (nonatomic) q duration;
@property (nonatomic) double startTimeProb;
@property (nonatomic) double endTimeProb;
@property (nonatomic) double chrousProb;
- (double)startTimeProb;
- (void)setStartTimeProb:;
- (double)endTimeProb;
- (void)setEndTimeProb:;
- (double)chrousProb;
- (void)setChrousProb:;
- (void)setStartTime:;
- (void)setDuration:;
- (long long)duration;
- (long long)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
