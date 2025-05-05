@interface IESLiveSaaSPBRivalExtraInfo : GPBMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger textType;
@property (nonatomic) NSString label;
@property (nonatomic) NSInteger anchorLayer;
@property (nonatomic) IESLiveSaaSPBRivalExtraInfo_LinkerInfo linkerInfo;
@property (nonatomic) BOOL hasLinkerInfo;
@property (nonatomic) IESLiveSaaSPBAnchorLinkmicUserSettings linkmicUserSettings;
@property (nonatomic) BOOL hasLinkmicUserSettings;
@property (nonatomic) IESLiveSaaSPBBattleUserSettings battleUserSettings;
@property (nonatomic) BOOL hasBattleUserSettings;
@property (nonatomic) q videoShowScore;
@property (nonatomic) NSString signExtra;
@property (nonatomic) NSString recommendInfo;
@property (nonatomic) NSInteger fromServerInviteType;
+ (id)descriptor;
@end
