@interface IESLiveSaaSPBTeamTask_SpecialGiftCountConfig : GPBMessage
@property (nonatomic) q giftId;
@property (nonatomic) NSString giftName;
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q maxGiftCountPerUser;
@property (nonatomic) q currentGiftCount;
+ (id)descriptor;
@end
