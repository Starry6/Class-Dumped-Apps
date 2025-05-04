@interface AWEEcomSearchMiddlePageBFFPrefetchStrategy : NSObject
- (id)commonParams:;
- (id)requestConfig;
- (id)buildRequestParams:;
- (id)parsePath:withJson:;
- (id)getNextPath:;
- (id)getNextJson:;
- (id)transToString:;
- (id)buildResponseParams:error:request:performance:;
+ (BOOL)useBffPrefetch;
@end
