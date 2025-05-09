@interface IESLiveWalletMyCoinModel : MTLModel
@property (nonatomic) IESLiveChargeModelContainer chargeModelContainer;
@property (nonatomic) NSArray otherCells;
@property (nonatomic) NSNumber diamondCount;
@property (nonatomic) NSString billUrlString;
@property (nonatomic) NSString freezeRemindString;
@property (nonatomic) NSString reasonalRemindText;
@property (nonatomic) BOOL needManuallyAgreement;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)billUrlString;
- (id)chargeModelContainer;
- (id)diamondCount;
- (id)freezeRemindString;
- (BOOL)needManuallyAgreement;
- (id)otherCells;
- (id)reasonalRemindText;
- (void)setBillUrlString:;
- (void)setChargeModelContainer:;
- (void)setDiamondCount:;
- (void)setFreezeRemindString:;
- (void)setNeedManuallyAgreement:;
- (void)setOtherCells:;
- (void)setReasonalRemindText:;
- (void).cxx_destruct;
+ (id)chargeModelContainerJSONTransformer;
+ (id)otherCellsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
