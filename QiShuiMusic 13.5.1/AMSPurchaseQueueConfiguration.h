@interface AMSPurchaseQueueConfiguration : NSObject
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) <AMSPurchaseResponseProtocol> delegate;
@property (nonatomic) # purchaseTaskClass;
- (void)setDelegate:;
- (id)initWithBag:;
- (void)setPurchaseTaskClass:;
- (id)delegate;
- (void).cxx_destruct;
- (id)bag;
- (Class)purchaseTaskClass;
@end
