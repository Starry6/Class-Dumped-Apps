@interface VMUTerminalColorizer : NSObject
+ (id)colorize:withColor:bold:;
+ (id)startColorCodeString:;
+ (id)controlCodeResetString;
@end
