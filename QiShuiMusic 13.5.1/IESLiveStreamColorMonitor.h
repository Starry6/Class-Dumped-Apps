@interface IESLiveStreamColorMonitor : NSObject
@property (nonatomic) IESLiveAudienceStreamColorSEIResult lastResult;
@property (nonatomic) NSMutableArray resultArray;
@property (nonatomic) double brightnessThreshold;
@property (nonatomic) double saturationThreshold;
@property (nonatomic) double contrastThreshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)supportSeiTypes;
- (double)brightnessThreshold;
- (double)contrastThreshold;
- (id)currentResultArray;
- (void)didSetAttachingDIContext;
- (void)onParseredWithSEIResult:;
- (void)setBrightnessThreshold:;
- (void)setContrastThreshold:;
- (void)setSaturationThreshold:;
- (void)setUPColorMonitorThreshold;
- (void).cxx_destruct;
- (id)resultArray;
- (double)saturationThreshold;
- (void)setResultArray:;
- (id)lastResult;
- (void)setLastResult:;
+ (BOOL)enbaleLiveStreamColorMonitor;
@end
