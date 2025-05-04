@interface AWEPayTransferAccountsDataManager : NSObject
@property (nonatomic) NSString conType;
- (id)conType;
- (void)requestTransferAccountsInfoWithParams:completion:;
- (void)requestTransferAccountsDetailWithOrderId:completion:;
- (void)createTransferAccountsOrder:completion:;
- (void)checkTransferAccountsPayStatus:completion:;
- (void)receiveTransferAccounts:completion:;
- (void)notifyReceiverWithParams:completion:;
- (void)setConType:;
- (void).cxx_destruct;
@end
