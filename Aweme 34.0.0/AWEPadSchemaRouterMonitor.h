@interface AWEPadSchemaRouterMonitor : NSObject
- (void)transferFail:errorMsg:sceneName:moduleNname:;
+ (BOOL)Enable;
+ (id)defaultMonitor;
@end
