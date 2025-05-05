@interface IESIMLogService : NSObject
- (void)iesim_logMessage:withLevel:tag:fileName:funcName:line:;
+ (id)sharedInstance;
@end
