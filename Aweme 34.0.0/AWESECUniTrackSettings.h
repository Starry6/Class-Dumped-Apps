@interface AWESECUniTrackSettings : NSObject
+ (BOOL)isLegacyEventReportByType:;
+ (BOOL)isUnifiedEventReportByType:;
+ (id)legacyEventSettings;
+ (id)unifiedEventSettings;
+ (id)uniTrackSettings;
@end
