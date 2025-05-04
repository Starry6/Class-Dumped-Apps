@interface AWEShareStatsManager : NSObject
+ (double)p_firstInstallTime;
+ (double)p_actionTime;
+ (void)statsNewShareWithItemID:itemType:awemeType:channelID:extraParams:;
+ (void)statsNewShareWithItemID:itemType:awemeType:channelID:;
@end
