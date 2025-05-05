@interface IESLiveSaaSOpenLiveBroadcastConfig : BDDynamicMTLModel
@property (nonatomic) NSNumber masterSwitch;
@property (nonatomic) NSNumber profileSwitch;
@property (nonatomic) NSNumber reminderSwitch;
@property (nonatomic) NSNumber reminderSwitchEnable;
@property (nonatomic) NSString scheduledTime;
@property (nonatomic) NSNumber scheduleDays;
@property (nonatomic) NSString scheduleText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)detailContentWithTextColor:isDarkPanel:;
- (id)titleContent;
+ (BOOL)isValid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
