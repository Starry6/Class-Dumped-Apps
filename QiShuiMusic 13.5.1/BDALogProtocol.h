@interface BDALogProtocol : NSObject
+ (int)levelMap:;
+ (void)setALogWithFileName:funcName:tag:line:level:format:;
@end
