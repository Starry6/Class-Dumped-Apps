@interface IESForestMemoryFetcher : IESForestBaseFetcher
- (void)fetchResourceWithRequest:completion:;
- (BOOL)isCacheSourceValid:request:;
- (id)name;
- (void)cancelFetch;
+ (id)fetcherName;
@end
