@interface HTSLiveLinkMic_LinkMicBattleScore : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) q score;
+ (id)descriptor;
@end
