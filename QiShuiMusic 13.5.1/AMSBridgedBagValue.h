@interface AMSBridgedBagValue : AMSFrozenBagValue
@property (nonatomic) AMSPromise valuePromise;
- (id)initWithKey:valueType:valuePromise:;
- (id)valuePromise;
- (void).cxx_destruct;
- (void)setValuePromise:;
- (void)valueWithCompletion:;
@end
