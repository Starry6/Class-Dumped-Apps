@interface BDUGLuckySettingsPopupReward : BDUGLuckyBDModel
@property (nonatomic) NSString amountText;
@property (nonatomic) NSString unitText;
- (void).cxx_destruct;
- (void)setAmountText:;
- (id)amountText;
- (void)setUnitText:;
- (id)unitText;
+ (id)modelCustomPropertyMapper;
@end
