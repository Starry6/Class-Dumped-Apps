@interface IESWebViewHotsoonHandler : NSObject
@property (nonatomic) NSString handlerName;
@property (nonatomic) @? consoleLogHandler;
- (id)consoleLogHandler;
- (void)setConsoleLogHandler:;
- (void)viewController:handleContent:;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)setHandlerName:;
- (id)handlerName;
+ (BOOL)conformsToProtocol:;
@end
