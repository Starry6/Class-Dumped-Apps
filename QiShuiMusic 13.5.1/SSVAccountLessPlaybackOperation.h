@interface SSVAccountLessPlaybackOperation : SSVComplexOperation
@property (nonatomic) NSDictionary HTTPHeaderFields;
@property (nonatomic) NSString assetStoreFrontIdentifier;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) @? responseBlock;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (id)valueForHTTPHeaderField:;
- (void)setValue:forHTTPHeaderField:;
- (void)main;
- (void).cxx_destruct;
- (id)responseBlock;
- (void)setResponseBlock:;
- (void)setHTTPHeaderFields:;
- (id)HTTPHeaderFields;
- (id)assetStoreFrontIdentifier;
- (void)setAssetStoreFrontIdentifier:;
- (id)_requestBodyData;
@end
