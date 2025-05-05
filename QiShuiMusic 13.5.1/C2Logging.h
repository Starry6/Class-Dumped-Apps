@interface C2Logging : NSObject
+ (void)printToLog:withDescription:array:;
+ (void)printToLog:withDescription:dictionary:;
+ (void)printToLog:withDescription:error:;
+ (void)printToLog:withDescription:object:;
@end
