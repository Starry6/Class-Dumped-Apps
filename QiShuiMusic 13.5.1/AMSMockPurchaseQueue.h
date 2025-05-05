@interface AMSMockPurchaseQueue : AMSPurchaseQueue
@property (nonatomic) AMSMockURLOverride mockURLOverride;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:mockURLOverride:;
- (id)mockURLOverride;
- (void)setMockURLOverride:;
@end
