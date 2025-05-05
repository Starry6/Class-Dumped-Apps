@interface IESLiveSaaSPBBattleNotifyMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger notifyType;
@property (nonatomic) q continueSeconds;
+ (id)descriptor;
@end
