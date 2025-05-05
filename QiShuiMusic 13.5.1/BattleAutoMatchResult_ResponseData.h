@interface BattleAutoMatchResult_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString mixRivalUserId;
@property (nonatomic) NSString defaultContent;
@property (nonatomic) HTSLiveImage defaultAvatar;
@property (nonatomic) BOOL hasDefaultAvatar;
@property (nonatomic) NSString rivalOpenId;
@property (nonatomic) NSString rivalUnionId;
@property (nonatomic) HTSLiveRoom rivalRoom;
@property (nonatomic) BOOL hasRivalRoom;
@property (nonatomic) NSMutableArray previewUserListArray;
@property (nonatomic) Q previewUserListArray_Count;
@property (nonatomic) q expectTime;
@property (nonatomic) BOOL canHighWay;
@property (nonatomic) q maxWaitTime;
@property (nonatomic) NSString signExtra;
@property (nonatomic) NSMutableArray rivalsArray;
@property (nonatomic) Q rivalsArray_Count;
@property (nonatomic) NSString battleAttachedInfo;
@property (nonatomic) NSString channelIdStr;
- (id)mixRivalUserId;
+ (id)descriptor;
@end
