@interface IESLiveInteractAudioReportConfig : NSObject
@property (nonatomic) BOOL enableDynamicThreshold;
@property (nonatomic) BOOL enableFallDown;
@property (nonatomic) Q fallDownTime;
@property (nonatomic) Q reportTimeInterval;
@property (nonatomic) Q highLimitAudioVolume;
- (BOOL)enableDynamicThreshold;
- (BOOL)enableFallDown;
- (unsigned long long)fallDownTime;
- (unsigned long long)highLimitAudioVolume;
- (unsigned long long)reportTimeInterval;
- (void)setEnableDynamicThreshold:;
- (void)setEnableFallDown:;
- (void)setFallDownTime:;
- (void)setHighLimitAudioVolume:;
- (void)setReportTimeInterval:;
- (id)yesOrNoWith:;
- (id)init;
- (id)description;
@end
