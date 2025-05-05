@interface SecABC : NSObject
+ (void)triggerAutoBugCaptureWithType:subType:;
+ (void)triggerAutoBugCaptureWithType:subType:subtypeContext:domain:events:payload:detectedProcess:;
@end
