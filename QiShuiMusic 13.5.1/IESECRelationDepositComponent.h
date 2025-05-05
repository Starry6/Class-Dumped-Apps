@interface IESECRelationDepositComponent : UIView
@property (nonatomic) IESECGoodsPriceLabel depositLabel;
- (id)depositLabel;
- (void)p_setupUI;
- (void)setDepositLabel:;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)deposit;
+ (double)depositWidthWithModel:;
+ (id)depositWithPriceWidth:;
+ (id)depositWithPriceWidth:Padding:ShowSuffix:;
@end
