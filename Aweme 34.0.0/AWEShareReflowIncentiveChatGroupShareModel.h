@interface AWEShareReflowIncentiveChatGroupShareModel : MTLModel
@property (nonatomic) AWEShareReflowIncentiveChatGroupModel groupInfo;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString inviterUID;
@property (nonatomic) NSString inviterNickName;
@property (nonatomic) NSString ticket;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inviterUID;
- (void)setInviterUID:;
- (id)inviterNickName;
- (void)setInviterNickName:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (void)setTicket:;
- (id)ticket;
- (id)groupInfo;
- (void)setGroupInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
