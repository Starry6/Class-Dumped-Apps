@interface AWEIMLiveGroupAnnouncementSampleInfo : AWEBaseApiModel
@property (nonatomic) NSString desc;
@property (nonatomic) NSString content;
@property (nonatomic) AWEIMLiveGroupAnnouncementSubscribeInfo subscribeInfo;
@property (nonatomic) NSString senderNickName;
@property (nonatomic) AWEURLModel senderAvatar;
- (id)subscribeInfo;
- (void)setSubscribeInfo:;
- (void)setSenderAvatar:;
- (id)senderAvatar;
- (id)senderNickName;
- (void)setSenderNickName:;
- (id)content;
- (void)setDesc:;
- (id)desc;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
