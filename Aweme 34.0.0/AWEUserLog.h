@interface AWEUserLog : NSObject
+ (void)socialLogInfoInLine:func:format:;
+ (void)generalLogErrorInLine:func:format:;
+ (void)friendLogWarnInLine:func:format:;
@end
