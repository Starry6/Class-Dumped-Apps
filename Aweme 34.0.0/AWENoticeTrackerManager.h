@interface AWENoticeTrackerManager : NSObject
+ (id)previousPageStringWithEnterFrom:;
+ (id)enterFromStringWithEnterFrom:previousPage:;
+ (void)trackEnterNotificationNoticeTab:subtab:;
+ (id)getNoticeTabAccountType:;
+ (id)previousPageStringWithEnterFrom:previousPage:;
+ (id)personalHomePageNoticeDefaultPreviousPage;
+ (id)personalHomePageNoticeDefaultEnterFrom;
@end
