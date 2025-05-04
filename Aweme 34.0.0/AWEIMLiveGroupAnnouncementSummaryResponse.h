@interface AWEIMLiveGroupAnnouncementSummaryResponse : AWEBaseApiModel
@property (nonatomic) Q announcementStatus;
@property (nonatomic) AWEIMLiveGroupAnnouncementInfo announcementInfo;
@property (nonatomic) AWEIMLiveGroupAnnouncementRemindInfo remindInfo;
@property (nonatomic) BOOL canSend;
@property (nonatomic) AWEIMLiveGroupAnnouncementSampleInfo sampleInfo;
@property (nonatomic) NSString sendDesc;
@property (nonatomic) NSArray announcementInfoList;
- (id)sampleInfo;
- (void)setSampleInfo:;
- (id)sendDesc;
- (id)announcementInfoList;
- (unsigned long long)announcementStatus;
- (id)remindInfo;
- (void)setSendDesc:;
- (void)setRemindInfo:;
- (void)setAnnouncementStatus:;
- (void)setAnnouncementInfoList:;
- (void).cxx_destruct;
- (BOOL)canSend;
- (id)announcementInfo;
- (void)setAnnouncementInfo:;
- (void)setCanSend:;
+ (id)announcementInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
