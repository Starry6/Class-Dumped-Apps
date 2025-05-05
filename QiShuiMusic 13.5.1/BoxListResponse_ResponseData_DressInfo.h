@interface BoxListResponse_ResponseData_DressInfo : IESLivePBBaseMessage
@property (nonatomic) NSString dressId;
@property (nonatomic) q dressOfflineTime;
@property (nonatomic) BoxListResponse_ResponseData_JumpSchema sameBoxJumpSchema;
@property (nonatomic) BOOL hasSameBoxJumpSchema;
+ (id)descriptor;
@end
