@interface IESLatchFlatSchema : NSObject
@property (nonatomic) NSDictionary queryItems;
@property (nonatomic) NSDictionary pathVariables;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString host;
@property (nonatomic) NSString path;
@property (nonatomic) NSString fragment;
- (id)dictFromQueryString:;
- (id)initWithURL:routerParam:;
- (id)pathVariables;
- (void)resolveHashAndQuery:;
- (void)setPathVariables:;
- (id)urlString;
- (id)path;
- (id)queryItems;
- (id)url;
- (void)setScheme:;
- (id)scheme;
- (id)host;
- (void)setFragment:;
- (void)setPath:;
- (void)setHost:;
- (void)setQueryItems:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)fragment;
+ (id)schemaWithURL:routerParam:;
@end
