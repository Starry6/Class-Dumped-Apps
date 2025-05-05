@interface HTSLiveSubscribeVipLiveMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q roomId;
+ (id)descriptor;
@end
