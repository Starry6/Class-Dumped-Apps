@interface IESECSKUDisplayConfig : IESECBaseApiModel
@property (nonatomic) BOOL showPriceComponent;
@property (nonatomic) BOOL showDiscountComponent;
@property (nonatomic) BOOL showDetailEntranceComponent;
@property (nonatomic) BOOL showStepperComponent;
@property (nonatomic) BOOL showDouInstallment;
- (void)setShowDetailEntranceComponent:;
- (void)setShowDiscountComponent:;
- (void)setShowDouInstallment:;
- (void)setShowPriceComponent:;
- (void)setShowStepperComponent:;
- (BOOL)showDetailEntranceComponent;
- (BOOL)showDiscountComponent;
- (BOOL)showDouInstallment;
- (BOOL)showPriceComponent;
- (BOOL)showStepperComponent;
+ (id)JSONKeyPathsByPropertyKey;
@end
