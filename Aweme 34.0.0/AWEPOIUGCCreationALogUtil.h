@interface AWEPOIUGCCreationALogUtil : NSObject
+ (id)getReportParams:params:;
+ (id)containerIDWithContext:;
+ (void)reportALogInfo:eventName:params:;
+ (void)reportALogWarn:eventName:params:;
+ (void)reportALogError:eventName:params:;
@end
