@interface HTSLiveBattleAutoMatchMessage_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSString defaultContent;
@property (nonatomic) HTSLiveImage defaultAvatar;
@property (nonatomic) BOOL hasDefaultAvatar;
@property (nonatomic) NSString rivalOpenId;
@property (nonatomic) HTSLiveRoom rivalRoom;
@property (nonatomic) BOOL hasRivalRoom;
@property (nonatomic) NSMutableArray previewUserListArray;
@property (nonatomic) Q previewUserListArray_Count;
@property (nonatomic) q expectTime;
@property (nonatomic) NSString rivalUserIdStr;
@property (nonatomic) BOOL canHighWay;
@property (nonatomic) q maxWaitTime;
@property (nonatomic) NSString signExtra;
@property (nonatomic) NSMutableArray rivalsArray;
@property (nonatomic) Q rivalsArray_Count;
@property (nonatomic) NSString battleAttachedInfo;
@property (nonatomic) NSString channelIdStr;
@property (nonatomic) q matchType;
+ (id)descriptor;
@end
