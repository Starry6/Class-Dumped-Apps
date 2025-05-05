@interface SSVMediaContentTasteUpdateRequest : SSRequest
@property (nonatomic) NSArray contentTasteItemUpdates;
@property (nonatomic) BOOL shouldInvalidateLocalCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:;
- (void).cxx_destruct;
- (void)startWithResponseBlock:;
- (id)contentTasteItemUpdates;
- (void)setContentTasteItemUpdates:;
- (BOOL)shouldInvalidateLocalCache;
- (void)setShouldInvalidateLocalCache:;
@end
