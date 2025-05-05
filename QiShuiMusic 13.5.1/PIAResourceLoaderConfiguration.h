@interface PIAResourceLoaderConfiguration : NSObject
@property (nonatomic) NSURLRequest request;
@property (nonatomic) NSString containerNameSpace;
@property (nonatomic) NSDictionary requestHeaderField;
@property (nonatomic) NSDictionary responseHeaderFiled;
@property (nonatomic) PIAContext context;
@property (nonatomic) @ engine;
@property (nonatomic) NSString source;
- (id)containerNameSpace;
- (id)requestHeaderField;
- (id)responseHeaderFiled;
- (void)setContainerNameSpace:;
- (void)setRequestHeaderField:;
- (void)setResponseHeaderFiled:;
- (id)engine;
- (void)setEngine:;
- (id)init;
- (id)context;
- (id)request;
- (void).cxx_destruct;
- (id)source;
- (void)setRequest:;
- (void)setContext:;
- (void)setSource:;
@end
