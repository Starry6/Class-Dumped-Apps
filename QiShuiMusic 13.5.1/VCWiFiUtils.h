@interface VCWiFiUtils : NSObject
+ (BOOL)getInfraChannelNumber:is5Ghz:;
+ (BOOL)copyAWDLChannelSequence:twoPtFourGhzChannelCount:fiveGhzChannelCount:dfsChannelCount:inactiveSlotCount:;
@end
