@interface ProcessorLog : NSObject
+ (void)log:filename:func:line:msg:;
+ (void)setCallbackLevel:;
+ (void)setErrorCallbackFirstOnly:;
+ (void)setPrintLevel:;
+ (void)setCallback:;
@end
