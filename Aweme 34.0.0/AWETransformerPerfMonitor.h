@interface AWETransformerPerfMonitor : NSObject
@property (nonatomic) AWETransformerFulllinkPerfContext fullLinkContext;
- (void)transformerSDKWillProcess;
- (void)transformerSDKDidFinishProcess;
- (double)getSDKWillProcessMediaTime;
- (void)transformerFMPDidFinishWithParams:;
- (void)transformerFmpBegin;
- (void)settingsWillRequest;
- (void)settingsDidFinishRequestWithResponse:;
- (void)setFullLinkContext:;
- (id)fullLinkContext;
+ (void)startFPSMonitor;
+ (void)trackDSLFmpWithParams:;
+ (void)__trackEvent:Params:;
+ (void)trackDSLCardFmpWithParams:;
+ (void)trackDSLCardPerformanceWithParams:;
+ (void)endFPSMonitorWithParams:;
+ (void)trackDSLPerformanceWithParams:;
@end
