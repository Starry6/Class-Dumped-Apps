@interface IESLiveOpenRechargeDialogArgsModel : IESLiveBridgeModel
@property (nonatomic) NSString version;
@property (nonatomic) NSNumber displayType;
@property (nonatomic) NSString orderId;
@property (nonatomic) NSString isBalanceEnough;
@property (nonatomic) NSString isFirstPackage;
+ (id)modelCustomPropertyMapper;
@end
