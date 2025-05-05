@interface ICAMSBagValuePromise : AMSPromise
@property (nonatomic) NSString bagKey;
@property (nonatomic) Q bagValueType;
- (id)initWithBagKey:bagValueType:;
- (id)bagKey;
- (void).cxx_destruct;
- (unsigned long long)bagValueType;
@end
