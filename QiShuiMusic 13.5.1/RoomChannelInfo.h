@interface RoomChannelInfo : IESLivePBBaseMessage
@property (nonatomic) q channelId;
@property (nonatomic) NSString token;
@property (nonatomic) BOOL isOwner;
@property (nonatomic) q memberCount;
@property (nonatomic) NSMutableArray topUserArray;
@property (nonatomic) Q topUserArray_Count;
@property (nonatomic) NSString channelName;
@property (nonatomic) NSInteger roomChannelMode;
@property (nonatomic) HTSLiveUser needApprovalUser;
@property (nonatomic) BOOL hasNeedApprovalUser;
@property (nonatomic) HTSLiveUser owner;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic) q maxMemberCount;
@property (nonatomic) RtcExtInfo rtcExtInfo;
@property (nonatomic) BOOL hasRtcExtInfo;
+ (id)descriptor;
@end
