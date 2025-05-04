@interface AWEEcomSearchMiddlePageNewerPrefetchStrategy : NSObject
- (id)buildRequestParams:;
- (id)buildResponseParams:error:request:performance:;
+ (BOOL)useNewerPrefetch;
@end
