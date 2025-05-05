@interface HTSLiveSubscribeInfoMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) BOOL isMember;
+ (id)descriptor;
@end
