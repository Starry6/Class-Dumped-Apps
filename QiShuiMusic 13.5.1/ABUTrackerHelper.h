@interface ABUTrackerHelper : NSObject
@property (nonatomic) ABUMediationSlotConfig lastMediationSlotConfig;
- (void)appendParamOfLoadParam:toExtra:;
- (void)appendParamOfBasicTo:;
- (void)appendParamOfLoadConfig:to:;
- (void)appendParamOfMediaSlotWithInfo:to:;
- (void)appendParamOfMediationSlotWithInfo:to:;
- (void)appendParamOfOriginConfig:toExtra:;
- (id)lastMediationSlotConfig;
- (void)setLastMediationSlotConfig:;
- (void)clear;
- (void).cxx_destruct;
+ (id)resultForUpload;
+ (void)updateReportResult:withParams:;
@end
