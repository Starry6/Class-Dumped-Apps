@interface WBComposerHttpRequest : WBHttpRequest
- (id)initWithURL:httpMethod:params:delegate:withTag:;
- (id)postBodyHasRawData:;
- (void)setHttpHeaderForRequest:;
+ (id)serializeURL:params:httpMethod:;
+ (id)requestWithURL:httpMethod:params:delegate:withTag:;
@end
