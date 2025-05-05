@interface BDASplashRequest : NSObject
+ (id)urlHost;
+ (void)fetchAdInfoWithParams:;
+ (void)fetchAdInfoWithParams:requestConfig:;
+ (id)getRequestInfo;
+ (void)sendAckWithModel:completion:;
+ (id)splashRequestParams;
+ (id)splashRequestUrlWithQueries:;
+ (void)splashRequestWithQueries:params:type:responseBlock:;
+ (void)tryFetchAdInfo;
+ (void)tryFetchAdInfoWithParam:;
+ (void)trySendStockWithParams:type:;
+ (void)trySendStockWithPath:Params:type:;
@end
