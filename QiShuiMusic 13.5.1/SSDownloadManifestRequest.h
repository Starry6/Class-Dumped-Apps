@interface SSDownloadManifestRequest : SSRequest
@property (nonatomic) q manifestFormat;
@property (nonatomic) <SSDownloadManifestRequestDelegate> delegate;
@property (nonatomic) NSURLRequest URLRequest;
@property (nonatomic) BOOL shouldHideUserPrompts;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)init;
- (void)dealloc;
- (id)copyXPCEncoding;
- (BOOL)start;
- (void)startWithCompletionBlock:;
- (id)initWithURLRequest:;
- (id)URLRequest;
- (BOOL)shouldHideUserPrompts;
- (void)setShouldHideUserPrompts:;
- (void)startWithManifestResponseBlock:;
- (long long)manifestFormat;
- (void)setManifestFormat:;
@end
