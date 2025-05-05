@interface IESLiveSaaSPBBattleAutoMatchResult_ResponseData : GPBMessage
@property (nonatomic) NSString defaultContent;
@property (nonatomic) IESLiveSaaSPBImage defaultAvatar;
@property (nonatomic) BOOL hasDefaultAvatar;
@property (nonatomic) NSString rivalOpenId;
@property (nonatomic) NSString rivalUnionId;
@property (nonatomic) IESLiveSaaSPBRoom rivalRoom;
@property (nonatomic) BOOL hasRivalRoom;
@property (nonatomic) NSMutableArray previewUserListArray;
@property (nonatomic) Q previewUserListArray_Count;
@property (nonatomic) q expectTime;
@property (nonatomic) BOOL canHighWay;
+ (id)descriptor;
@end
