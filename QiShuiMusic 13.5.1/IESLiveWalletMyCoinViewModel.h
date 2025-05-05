@interface IESLiveWalletMyCoinViewModel : NSObject
@property (nonatomic) IESLiveWalletMyCoinModel myCoinModel;
@property (nonatomic) QueryIncomeResult income;
- (void)setMyCoinModel:;
- (id)income;
- (id)myCoinModel;
- (void)p_updateIncomeWithCompletion:;
- (void)p_updateMyCoinWithCompletion:;
- (void)setIncome:;
- (void)updateDataWithCompletion:;
- (void).cxx_destruct;
@end
