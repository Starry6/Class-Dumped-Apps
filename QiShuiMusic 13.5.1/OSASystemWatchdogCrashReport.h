@interface OSASystemWatchdogCrashReport : OSACrackShotReport
- (id)problemType;
- (id)initWithPid:procName:bundleID:exitSnapshot:reason:;
@end
