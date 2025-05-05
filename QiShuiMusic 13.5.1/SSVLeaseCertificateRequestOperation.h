@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation
@property (nonatomic) NSString certificateURLBagKey;
@property (nonatomic) @? outputBlock;
- (void)cancel;
- (id)initWithURLBag:;
- (id)outputBlock;
- (void)setOutputBlock:;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (id)certificateURLBagKey;
- (void)setCertificateURLBagKey:;
- (id)_resolveCertificateURLReturningError:;
@end
