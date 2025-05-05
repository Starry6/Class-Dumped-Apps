@interface IESForestBuiltinFetcher : IESForestBaseFetcher
- (void)fetchResourceWithRequest:completion:;
- (id)name;
- (void)cancelFetch;
+ (id)fetcherName;
@end
