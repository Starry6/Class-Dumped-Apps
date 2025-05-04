@interface AWEIMLiveGroupAnnouncementUtility : NSObject
+ (id)timeTextFromTimeStampInLongLong:;
+ (void)awe_clearLiveAnnouncementInfo:;
+ (id)awe_liveAnnouncementStatusInfo:;
+ (void)setAwe_liveAnnouncementStatusInfo:msg:;
+ (id)dateFormatter;
+ (id)timeFormatter;
@end
