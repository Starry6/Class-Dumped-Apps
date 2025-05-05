@interface IESLiveRoomLinkerContent : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSInteger roomLinkSilenceStatus;
@property (nonatomic) q anchorId;
@property (nonatomic) q isAnchorBackground;
@property (nonatomic) q version;
@property (nonatomic) NSString anchorOpenId;
+ (id)descriptor;
@end
