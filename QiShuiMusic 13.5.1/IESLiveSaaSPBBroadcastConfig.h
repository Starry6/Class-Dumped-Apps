@interface IESLiveSaaSPBBroadcastConfig : GPBMessage
@property (nonatomic) NSInteger scheduledMasterSwitch;
@property (nonatomic) NSInteger scheduledProfileSwitch;
@property (nonatomic) NSString scheduledTime;
@property (nonatomic) NSInteger scheduledDays;
@property (nonatomic) NSString scheduledTimeText;
@property (nonatomic) NSInteger scheduledNoticeSwitchDisplay;
@property (nonatomic) NSInteger scheduledNoticeSwitch;
+ (id)descriptor;
@end
