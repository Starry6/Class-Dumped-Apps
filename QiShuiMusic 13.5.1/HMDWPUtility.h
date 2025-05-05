@interface HMDWPUtility : NSObject
+ (void)protectClass:slector:skippedDepth:waitFlag:syncWaitTime:exceptionTimeout:exceptionCallback:protectBlock:;
+ (void)protectObject:slector:skippedDepth:waitFlag:syncWaitTime:exceptionTimeout:exceptionCallback:protectBlock:;
+ (void)protectSyncWaitTime:exceptionTimeout:exceptionCallback:protectBlock:skippedDepth:waitFlag:protectSelectorBlock:;
@end
