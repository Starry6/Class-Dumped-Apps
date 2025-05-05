@interface IESLiveSaaSPBLinkMic : GPBMessage
@property (nonatomic) q channelId;
@property (nonatomic) IESLiveSaaSPBLinkMic_LinkMicChannelInfo channelInfo;
@property (nonatomic) BOOL hasChannelInfo;
@property (nonatomic) NSMutableArray battleScoresArray;
@property (nonatomic) Q battleScoresArray_Count;
@property (nonatomic) IESLiveSaaSPBLinkMic_LinkMicBattleSetting battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (nonatomic) NSString rivalAnchorOpenId;
@property (nonatomic) NSString rivalAnchorUnionId;
@property (nonatomic) q linkmicAnchorCount;
+ (id)descriptor;
@end
