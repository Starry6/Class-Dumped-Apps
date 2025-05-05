@interface DIRSTask : NSObject
+ (void)asyncConcurrentTask:;
+ (void)asyncGlobalTask:;
+ (void)asyncMainTask:forContext:;
+ (id)defaultConcurrent;
@end
