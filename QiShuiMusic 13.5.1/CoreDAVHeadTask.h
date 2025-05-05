@interface CoreDAVHeadTask : CoreDAVTask
- (id)requestBody;
- (unsigned long long)cachePolicy;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
@end
