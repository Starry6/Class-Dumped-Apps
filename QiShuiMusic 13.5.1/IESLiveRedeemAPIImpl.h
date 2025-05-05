@interface IESLiveRedeemAPIImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)redeemWithDiamond:currency:source:userID:trialDict:exchangeType:completion:;
- (void)requestRedeemInfoWithParams:completion:;
- (void)requestRedeemModelsWithParams:tintTags:completion:;
- (void)requestTrialExchangeDiamond:source:exchangeType:completion:;
- (id)transformModelFromFlameModel:;
@end
