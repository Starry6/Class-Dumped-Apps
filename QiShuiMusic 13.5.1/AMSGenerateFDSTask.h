@interface AMSGenerateFDSTask : AMSTask
@property (nonatomic) AMSFDSRequest request;
@property (nonatomic) ACAccount account;
@property (nonatomic) Q action;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) BOOL deviceSupportsAFDSValues;
@property (nonatomic) BOOL deviceSupportsAFDSValuesV2;
@property (nonatomic) NSString logKey;
@property (nonatomic) NSNumber purchaseIdentifier;
- (id)account;
- (id)initWithRequest:bag:;
- (id)logKey;
- (unsigned long long)action;
- (id)request;
- (id)initWithPurchaseInfo:bag:;
- (void).cxx_destruct;
- (id)bag;
- (id)purchaseIdentifier;
- (BOOL)deviceSupportsAFDSValues;
- (BOOL)deviceSupportsAFDSValuesV2;
- (id)runTask;
+ (BOOL)deviceSupportsAFDSV2WithBag:logKey:;
@end
