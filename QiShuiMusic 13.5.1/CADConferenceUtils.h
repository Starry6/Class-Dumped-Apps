@interface CADConferenceUtils : NSObject
+ (void)performConferenceLinkRenewalIfNeeded;
+ (void)setNextConferenceLinkRenewalDate:;
+ (void)removeNextConferenceLinkRenewalDate;
+ (BOOL)_performConferenceURLRenewalWithDatabase:;
+ (id)_conferenceURLsToRenewWithDatabase:URLString:;
+ (id)_extractURLStringsFromCalEvent:;
@end
