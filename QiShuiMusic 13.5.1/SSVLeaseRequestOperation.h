@interface SSVLeaseRequestOperation : SSVOperation
@property (nonatomic) NSString certificateURLBagKey;
@property (nonatomic) SSVPlaybackLeaseRequest leaseRequest;
@property (nonatomic) @? outputBlock;
- (void)cancel;
- (id)outputBlock;
- (void)setOutputBlock:;
- (void)main;
- (void).cxx_destruct;
- (id)certificateURLBagKey;
- (void)setCertificateURLBagKey:;
- (id)initWithLeaseRequest:configuration:;
- (id)initWithLeaseRequest:URLBag:;
- (id)leaseRequest;
- (BOOL)_loadCertificateDataIfNecessary:;
- (BOOL)_resolveConfigurationAndURLReturningError:;
- (BOOL)_shouldRetryForError:;
@end
