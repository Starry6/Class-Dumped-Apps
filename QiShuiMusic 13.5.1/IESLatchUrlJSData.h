@interface IESLatchUrlJSData : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString initilizeJSString;
@property (nonatomic) NSString prefetchJSString;
@property (nonatomic) NSDictionary routerParam;
@property (nonatomic) Q prefetchFrom;
- (void)setRouterParam:;
- (id)initilizeJSString;
- (unsigned long long)prefetchFrom;
- (id)prefetchJSString;
- (id)routerParam;
- (void)setInitilizeJSString:;
- (void)setPrefetchFrom:;
- (void)setPrefetchJSString:;
- (void)setChannel:;
- (id)url;
- (id)channel;
- (void)setUrl:;
- (void).cxx_destruct;
@end
