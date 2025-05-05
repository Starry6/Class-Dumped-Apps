@interface PIAWorkerExecuteConfiguration : NSObject
@property (nonatomic) NSString userAgent;
@property (nonatomic) NSString nameSpace;
@property (nonatomic) NSURL href;
@property (nonatomic) NSString scriptURL;
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary globalProps;
@property (nonatomic) BOOL isWarmUp;
- (void)setGlobalProps:;
- (id)globalProps;
- (BOOL)isWarmUp;
- (void)setIsWarmUp:;
- (void)setHref:;
- (id)userAgent;
- (id)href;
- (void)setUserAgent:;
- (void)setName:;
- (void)setNameSpace:;
- (id)nameSpace;
- (void).cxx_destruct;
- (id)name;
- (id)scriptURL;
- (void)setScriptURL:;
@end
