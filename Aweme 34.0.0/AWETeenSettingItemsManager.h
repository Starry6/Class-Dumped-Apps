@interface AWETeenSettingItemsManager : NSObject
@property (nonatomic) BOOL showWalletEntrance;
@property (nonatomic) NSString walletSchema;
@property (nonatomic) BOOL showBalanceWithdrawEntrance;
@property (nonatomic) NSString balanceWithdrawSchema;
- (BOOL)isServerForceTeenModeOn;
- (BOOL)showBalanceWithdrawEntrance;
- (BOOL)showWalletEntrance;
- (BOOL)isForceU14User;
- (void)setShowWalletEntrance:;
- (void)setWalletSchema:;
- (void)setShowBalanceWithdrawEntrance:;
- (void)setBalanceWithdrawSchema:;
- (void)fetchWalletEntranceRequest;
- (void)fetchBalanceWithdrawEntranceRequest;
- (id)walletSchema;
- (id)balanceWithdrawSchema;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
