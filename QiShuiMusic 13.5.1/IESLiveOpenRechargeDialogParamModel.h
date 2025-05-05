@interface IESLiveOpenRechargeDialogParamModel : IESLiveBridgeModel
@property (nonatomic) NSString requestPage;
@property (nonatomic) NSNumber source;
@property (nonatomic) NSNumber account;
@property (nonatomic) NSString enoughCallback;
@property (nonatomic) NSNumber bussinessScene;
@property (nonatomic) NSNumber rechargeSource;
@property (nonatomic) NSNumber lackMoney;
@property (nonatomic) NSString chargeReason;
@property (nonatomic) NSString callbackScheme;
@property (nonatomic) IESLiveOpenRechargeDialogArgsModel args;
+ (id)modelCustomPropertyMapper;
@end
