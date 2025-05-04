@interface AWEUserTrackService : NSObject
+ (void)profileTabSessionInfo:tabLogName:secondTabLogName:maxItem:isSelf:ext:;
+ (void)profileTabLoadMonitorWithConfig:;
+ (void)profileTabErrorMonitorWithConfig:;
+ (void)trackImageLoadResult:url:error:extra:profileContext:;
+ (void)profileEnterErrorMonitorWithConfig:;
+ (void)profileTabStayDuration:firstTabName:secondTabName:enterFrom:;
+ (id)p_commonParams:enterFrom:isSelf:;
@end
