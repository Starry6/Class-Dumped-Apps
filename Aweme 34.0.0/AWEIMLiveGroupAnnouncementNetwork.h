@interface AWEIMLiveGroupAnnouncementNetwork : NSObject
+ (void)fetchAnnouncementLiveStatusWithGroupId:serverMessageId:convsersationShortId:appointmentID:completion:;
+ (void)subscribeAnnoucementWithGroupId:status:messageId:serverMessageId:convsersationShortId:appointmentID:completion:;
+ (void)fetchAnnouncementSummaryWithGroupId:completion:;
+ (void)setRemindWithGroupId:status:appointmentID:completion:;
+ (id)sendBulletLiveGroupAnnouncementMessageWithAnnouncementId:convShortID:anchorID:source:;
@end
