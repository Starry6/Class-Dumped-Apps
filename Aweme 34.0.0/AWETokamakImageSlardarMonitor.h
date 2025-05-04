@interface AWETokamakImageSlardarMonitor : AWETokamakImageMonitor
- (void)receiveImageModel:;
- (id)initWithConfig:;
+ (void)reportImageOnMainThread:withExceptionName:useUserInfo:;
@end
