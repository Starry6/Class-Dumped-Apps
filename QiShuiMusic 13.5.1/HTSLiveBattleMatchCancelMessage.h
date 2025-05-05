@interface HTSLiveBattleMatchCancelMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) q cancelType;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString clientAttachedInfo;
+ (id)descriptor;
@end
