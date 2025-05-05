@interface ICStateHandler : NSObject
+ (void)addStateHandlerWithName:stateBlock:;
+ (void)addStateHandlerWithName:sysdiagnoseOnly:stateBlock:;
@end
