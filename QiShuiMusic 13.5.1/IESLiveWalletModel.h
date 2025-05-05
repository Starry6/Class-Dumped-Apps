@interface IESLiveWalletModel : IESLiveDynamicMTLModel
@property (nonatomic) Q userID;
@property (nonatomic) Q diamondNum;
@property (nonatomic) q totalMoney;
@property (nonatomic) q hostIncomePercent;
@property (nonatomic) Q watermelonNum;
@property (nonatomic) NSString couponInfo;
@property (nonatomic) NSArray couponDetail;
@property (nonatomic) Q missionCurrencyNum;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPBModel:;
+ (id)couponDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
