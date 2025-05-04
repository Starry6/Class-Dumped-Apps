@interface AWETokamakImageMonitor : NSObject
- (void)receiveImageModel:;
- (void)trackImage:;
- (id)initWithConfig:;
+ (id)getBizTagWithURL:;
+ (id)_nearestViewControllerNameForView:;
+ (id)_viewSize:;
+ (id)_generateViewPathForModel:shortPath:userInfo:;
+ (id)_generateIssueTitle:;
@end
