@interface HTSLiveLinkMic_LinkMicBattleSetting : IESLivePBBaseMessage
@property (nonatomic) q channelId;
@property (nonatomic) q duration;
@property (nonatomic) q startTime;
@property (nonatomic) q startTimeMs;
@property (nonatomic) NSString theme;
@property (nonatomic) q finished;
@property (nonatomic) q battleId;
@property (nonatomic) q matchType;
@property (nonatomic) q playMode;
@property (nonatomic) q teamMode;
@property (nonatomic) q activityMode;
+ (id)descriptor;
@end
