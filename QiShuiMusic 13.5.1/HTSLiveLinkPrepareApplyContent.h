@interface HTSLiveLinkPrepareApplyContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) q fromRoomId;
@property (nonatomic) q vendor;
@property (nonatomic) NSString secFromUserId;
@property (nonatomic) q count;
+ (id)descriptor;
@end
