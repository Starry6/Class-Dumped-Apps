@interface VSAMSBagLoadOperation : VSAsyncOperation
@property (nonatomic) @ value;
@property (nonatomic) NSError error;
@property (nonatomic) NSString bagKey;
- (void)executionDidBegin;
- (void)setError:;
- (id)error;
- (id)bagKey;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (void)setBagKey:;
@end
