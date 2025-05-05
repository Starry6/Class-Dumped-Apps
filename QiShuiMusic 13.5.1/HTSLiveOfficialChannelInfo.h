@interface HTSLiveOfficialChannelInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray mixHostUidsArray;
@property (nonatomic) HTSLiveUser channelUser;
@property (nonatomic) BOOL hasChannelUser;
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString channelIntro;
@property (nonatomic) q endTimestamp;
@property (nonatomic) q forbiddenBeforeEnd;
@property (nonatomic) NSInteger currentShowId;
@property (nonatomic) q maxEnterTime;
@property (nonatomic) q maxNextTime;
@property (nonatomic) GPBInt64Int64Dictionary delayEnterTime;
@property (nonatomic) Q delayEnterTime_Count;
@property (nonatomic) BOOL hostPermission;
@property (nonatomic) q backupRoomId;
@property (nonatomic) HTSLiveUser livingUser;
@property (nonatomic) BOOL hasLivingUser;
@property (nonatomic) BOOL hostCanAcceptGift;
@property (nonatomic) NSMutableArray hostOpenIdsArray;
@property (nonatomic) Q hostOpenIdsArray_Count;
@property (nonatomic) NSString backupRoomIdStr;
@property (nonatomic) BOOL enableHost;
- (id)mixHostUidsArray;
- (void)setMixHostUidsArray:;
+ (id)descriptor;
@end
