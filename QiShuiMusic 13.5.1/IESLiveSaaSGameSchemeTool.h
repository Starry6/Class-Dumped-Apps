@interface IESLiveSaaSGameSchemeTool : NSObject
- (BOOL)canOpenScheme:;
- (BOOL)isRegisteredCanOpenURLScheme:;
- (void)openScheme:completion:;
+ (id)sharedInstance;
@end
