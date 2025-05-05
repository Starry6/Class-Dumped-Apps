@interface DYSDKAuthUtil : NSObject
+ (id)getLogAuthInfo:;
+ (unsigned long long)detectAuthTargetApp;
+ (id)errorCancelWithPrompts:;
+ (id)errorWithPrompts:;
+ (id)errorWithPrompts:errorCode:;
+ (id)getLogErrorInfo:;
@end
