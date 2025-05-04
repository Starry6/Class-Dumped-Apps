@interface AWEFormatBaseApi : HTSLiveApi
- (void)post:callback:;
- (void)postChunk:callback:;
- (void)requestWithMethod:request:callback:;
- (void)get:callback:;
@end
