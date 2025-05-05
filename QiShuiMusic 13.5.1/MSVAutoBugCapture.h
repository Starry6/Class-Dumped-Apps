@interface MSVAutoBugCapture : NSObject
+ (void)snapshotWithDomain:type:subType:context:triggerThresholdValues:events:completion:;
+ (BOOL)_isReporterEnabled;
@end
