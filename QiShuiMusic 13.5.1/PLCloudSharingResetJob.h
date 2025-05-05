@interface PLCloudSharingResetJob : PLCloudSharingJob
- (void)run;
- (long long)daemonOperation;
- (void)runDaemonSide;
+ (void)resetAllLocalState;
@end
