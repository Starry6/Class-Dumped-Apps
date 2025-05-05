@interface HTSLiveLinkMic : IESLivePBBaseMessage
@property (nonatomic) q channelId;
@property (nonatomic) HTSLiveLinkMic_LinkMicChannelInfo channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (nonatomic) NSMutableArray battleScoresArray;
@property (nonatomic) Q battleScoresArray_Count;
@property (nonatomic) HTSLiveLinkMic_LinkMicBattleSetting battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (nonatomic) NSString rivalAnchorOpenId;
@property (nonatomic) NSString rivalAnchorUnionId;
@property (nonatomic) q linkmicAnchorCount;
+ (id)descriptor;
@end
