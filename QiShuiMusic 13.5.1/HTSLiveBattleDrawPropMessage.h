@interface HTSLiveBattleDrawPropMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger reason;
@property (nonatomic) HTSLiveImage animation;
@property (nonatomic) BOOL hasAnimation;
@property (nonatomic) q propId;
@property (nonatomic) q battleId;
+ (id)descriptor;
@end
