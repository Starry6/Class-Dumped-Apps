@interface WebNavigationData : NSObject
- (id)url;
- (void)dealloc;
- (id)title;
- (id)response;
- (id)originalRequest;
- (BOOL)hasSubstituteData;
- (id)clientRedirectSource;
- (id)initWithURLString:title:originalRequest:response:hasSubstituteData:clientRedirectSource:;
@end
