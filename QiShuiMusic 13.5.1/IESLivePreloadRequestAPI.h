@interface IESLivePreloadRequestAPI : HTSLiveApi
- (void)preloadWithChunkRequest:method:finish:;
- (void)preloadWithRequest:method:finish:;
- (void)preloadWithRequestUrlPath:params:headers:method:modelClass:responseFormat:finish:;
@end
