@interface AWEIMLiveGroupAnnouncementInfo : AWEBaseApiModel
@property (nonatomic) q announcementId;
@property (nonatomic) NSString content;
@property (nonatomic) q scheduleTimeInLongLong;
@property (nonatomic) AWEIMLiveGroupAnnouncementSubscribeInfo subscribeInfo;
@property (nonatomic) AWEIMLiveGroupAnnouncementRemindInfo remindInfo;
@property (nonatomic) BOOL canSend;
- (id)subscribeInfo;
- (void)setSubscribeInfo:;
- (long long)scheduleTimeInLongLong;
- (long long)announcementId;
- (void)setAnnouncementId:;
- (void)setScheduleTimeInLongLong:;
- (id)remindInfo;
- (void)setRemindInfo:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (BOOL)canSend;
- (void)setCanSend:;
+ (id)subscribeInfoJSONTransformer;
+ (id)remindInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
