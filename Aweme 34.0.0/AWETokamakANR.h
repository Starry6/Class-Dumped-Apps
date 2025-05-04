@interface AWETokamakANR : NSObject
@property (nonatomic) BOOL isReporterReady;
@property (nonatomic) NSDictionary lastSessionANRInfo;
@property (nonatomic) BOOL detectedLastANR;
- (void)onReporterReady;
- (void)monitorLastSessionARN;
- (void)setIsReporterReady:;
- (void)reportANRInLastSession;
- (void)reportANRInCurrentSession:;
- (void)monitorCurrentSessionANR:;
- (void)setLastSessionANRInfo:;
- (void)setDetectedLastANR:;
- (BOOL)isReporterReady;
- (id)lastSessionANRInfo;
- (BOOL)detectedLastANR;
- (void).cxx_destruct;
- (void)start;
+ (id)shared;
@end
