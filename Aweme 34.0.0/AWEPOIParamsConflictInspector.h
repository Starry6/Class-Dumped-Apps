@interface AWEPOIParamsConflictInspector : NSObject
+ (BOOL)canCheckConflict:;
+ (id)keysNeedChecked:to:;
+ (id)checkConflict:withDict:whitelist:atPath:curDepth:;
+ (void)trackConflict:oldDict:caller:;
+ (void)checkIfSessionConflict:newSession:caller:;
@end
