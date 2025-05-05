@interface IESLiveSaaSPBItemCardInfo : GPBMessage
@property (nonatomic) NSInteger itemCardType;
@property (nonatomic) NSInteger cardPlayType;
@property (nonatomic) NSString cardValue;
@property (nonatomic) q restDuration;
@property (nonatomic) q failureTime;
@property (nonatomic) NSString progressText;
@property (nonatomic) NSInteger itemCardStatus;
@property (nonatomic) q mysteryRankN;
@property (nonatomic) q totalDuration;
@property (nonatomic) NSString cardName;
+ (id)descriptor;
@end
