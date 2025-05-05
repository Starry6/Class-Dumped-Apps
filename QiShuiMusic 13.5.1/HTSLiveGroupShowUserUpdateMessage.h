@interface HTSLiveGroupShowUserUpdateMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveGroupShowInfo info;
@property (nonatomic) BOOL hasInfo;
+ (id)descriptor;
@end
