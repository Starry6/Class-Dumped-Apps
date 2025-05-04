@interface AWESideBarPrintUtil : NSObject
+ (id)businessIDForClass:selector:;
+ (void)asyncPrintSideBarData:fromClass:selector:;
+ (void)printFunctionModel:fromClass:selector:;
+ (void)printSideBarModel:fromClass:selector:;
+ (BOOL)sideBarLoopPrintEnabled;
+ (void)printAbstract:scope:fromClass:selector:;
+ (void)printSideBarData:fromClass:selector:;
+ (void)loopPrintString:scope:;
+ (unsigned long long)sideBarLoopPrintStep;
+ (id)safeStringFromClass:;
+ (id)safeStringFromSelector:;
@end
