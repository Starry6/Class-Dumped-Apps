@interface HTSLiveMemberEntranceUpdateMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q actionType;
@property (nonatomic) HTSLiveMemberEntranceInfo memberEntranceInfo;
@property (nonatomic) BOOL hasMemberEntranceInfo;
+ (id)descriptor;
@end
