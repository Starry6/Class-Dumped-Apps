@interface BNAVTools : NSObject
+ (void)addMask:outputFileName:progress:completion:;
+ (void)addWaterMark:label:image:font:renderSize:outputFileName:progress:completion:;
+ (void)adjust:videoSize:outputFileName:shouldAddMask:progress:completion:;
+ (void)clipMedia:range:hasMask:outputFileName:progress:completion:;
+ (void)crop:timeRange:backgroundImage:videoSize:videoRect:outputFileName:progress:completion:;
+ (void)exportAsset:outputFileName:progress:completion:;
+ (id)gif2MP4:videoSize:outputFileName:progress:completion:;
+ (void)image2MP4:videoSize:duration:outputFileName:progress:completion:;
+ (void)loopMedia:duration:outputFileName:progress:completion:;
+ (void)swizzeAudioSession:;
+ (void)swizzeBackgroudDropView:;
+ (id)truncateTimeRange:inDuration:;
+ (id)videoDisplaySize:;
@end
