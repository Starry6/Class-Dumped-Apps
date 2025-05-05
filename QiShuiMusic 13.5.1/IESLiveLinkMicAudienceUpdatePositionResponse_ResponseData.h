@interface IESLiveLinkMicAudienceUpdatePositionResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray linkedUsersArray;
@property (nonatomic) Q linkedUsersArray_Count;
@property (nonatomic) NSMutableArray lockedPositionsArray;
@property (nonatomic) Q lockedPositionsArray_Count;
@property (nonatomic) Q version;
+ (id)descriptor;
@end
