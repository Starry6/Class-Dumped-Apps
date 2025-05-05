@interface IESLiveOpenRechargeDialogDataModel : IESLiveBridgeModel
@property (nonatomic) NSString rechargeCode;
@property (nonatomic) NSNumber diamondBalance;
+ (id)modelCustomPropertyMapper;
@end
