@interface AMSFailingBagValue : AMSFrozenBagValue
@property (nonatomic) NSError error;
- (void)setError:;
- (id)error;
- (id)initWithKey:valueType:error:;
- (void).cxx_destruct;
- (void)valueWithCompletion:;
@end
