@interface IESLiveSaaSPBRoomLinkerContent : GPBMessage
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSInteger roomLinkSilenceStatus;
@property (nonatomic) q anchorId;
@property (nonatomic) q isAnchorBackground;
@property (nonatomic) q version;
+ (id)descriptor;
@end
