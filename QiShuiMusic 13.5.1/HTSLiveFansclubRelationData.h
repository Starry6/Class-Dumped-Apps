@interface HTSLiveFansclubRelationData : IESLivePBBaseMessage
@property (nonatomic) q userOpenid;
@property (nonatomic) q anchorOpenid;
@property (nonatomic) q intimacy;
@property (nonatomic) q intimacyLastUpdateTime;
@property (nonatomic) q status;
@property (nonatomic) q participateTime;
@property (nonatomic) q autoLightUpSwitch;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
