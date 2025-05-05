@interface BDALogHelper : NSObject
+ (void)alog_set_oslog_detail_callback:;
+ (id)alog_get_log_detail_callback;
+ (id)alog_get_oslog_detail_callback;
+ (void)alog_set_detail_callback:;
@end
