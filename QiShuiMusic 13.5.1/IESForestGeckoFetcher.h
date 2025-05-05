@interface IESForestGeckoFetcher : IESForestBaseFetcher
- (id)FetchGeckoLocalDataWithRequest:error:;
- (void)fetchResourceWithRequest:completion:;
- (id)lockSessionWithRequest:;
- (id)responseWithRequest:data:;
- (void)syncChannel:accessKey:resolve:reject:;
- (id)name;
- (void)cancelFetch;
+ (id)fetcherName;
@end
