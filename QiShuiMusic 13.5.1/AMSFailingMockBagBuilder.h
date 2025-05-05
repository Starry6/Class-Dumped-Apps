@interface AMSFailingMockBagBuilder : AMSMockBagBuilder
@property (nonatomic) double delay;
@property (nonatomic) NSError error;
- (void)setError:;
- (double)delay;
- (id)error;
- (void)setDelay:;
- (void).cxx_destruct;
- (id)createMockBag;
@end
