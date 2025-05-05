@interface IESLiveChargeAlertUIServiceImpl : NSObject
@property (nonatomic) IESLiveChargeRetentionAlert retentAlert;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRetentAlert:;
- (id)retentAlert;
- (void)showChargeManualAgreementAlertWithConfirmBlock:;
- (void)showChargeSafeCheckBoxViewWithConfirmBlock:cancelBlock:;
- (void)showChargeSafeRemindAlertWithConfirmBlock:cancelBlock:;
- (void)showRetetionAlertWithTrackInfo:model:;
- (id)containerView;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
