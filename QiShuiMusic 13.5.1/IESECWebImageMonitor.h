@interface IESECWebImageMonitor : NSObject
+ (id)formatLogExtra:;
+ (BOOL)checkWhiteListWithPerfLog:;
+ (void)p_logImagePerf:logExtra:;
+ (BOOL)p_shouldtrackLargeImageExceptionWithPerfLog:;
+ (void)p_trackLargeImageExceptionWithPerfLog:;
+ (void)trackImageRequestPerfLog:logExtra:;
+ (void)trackImageTemplateTransformError:imageUrl:pattern:;
+ (void)trackLargeImageWithPerfLog:;
+ (id)trackingQueue;
@end
