@interface AWEIMLiveGroupAnnouncementLiveStatusResponse : AWEBaseApiModel
@property (nonatomic) Q liveStatus;
@property (nonatomic) AWEIMLiveGroupAnnouncementSubscribeInfo subscribeInfo;
@property (nonatomic) q roomId;
- (long long)roomId;
- (void)setRoomId:;
- (void)setLiveStatus:;
- (id)subscribeInfo;
- (void)setSubscribeInfo:;
- (void).cxx_destruct;
- (unsigned long long)liveStatus;
+ (id)JSONKeyPathsByPropertyKey;
@end
