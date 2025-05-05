@interface IESContainerKitLogger : NSObject
+ (id)_actionStringFromAction:;
+ (void)logAction:property:before:after:callerInfo:;
+ (void)logError:callerInfo:infos:;
@end
