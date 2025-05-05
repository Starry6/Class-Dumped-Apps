@interface CKNetRequestParam : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString urlPath;
@property (nonatomic) q requestMethod;
@property (nonatomic) NSDictionary parameters;
@property (nonatomic) NSDictionary headerFields;
- (id)cppValue;
- (id)initWithCPPValue:;
- (id)initWithURL:urlPath:requestMethod:parameters:headerFields:;
- (void)setUrlPath:;
- (id)url;
- (id)init;
- (void)setUrl:;
- (id)parameters;
- (void).cxx_destruct;
- (id)headerFields;
- (void)setParameters:;
- (id).cxx_construct;
- (id)urlPath;
- (void)setHeaderFields:;
- (long long)requestMethod;
- (void)setRequestMethod:;
@end
