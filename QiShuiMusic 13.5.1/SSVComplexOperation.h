@interface SSVComplexOperation : SSVOperation
@property (nonatomic) NSDictionary URLBagDictionary;
@property (nonatomic) SSVFairPlaySAPSession SAPSession;
- (id)SAPSession;
- (void)setSAPSession:;
- (void)configureWithURLBag:;
- (id)URLBagDictionary;
- (void).cxx_destruct;
- (void)configureWithURLBagDictionary:;
- (id)newLoadURLOperationWithRequest:;
@end
