@interface BDXBridgeAuthConfigFromGeckoDownload : NSObject
@property (nonatomic) NSString requestURLString;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSDictionary params;
@property (nonatomic) q retryCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchBridgeAuthConfigCompletion:;
- (void)fetchBridgeAuthConfigCompletion:retryCount:;
- (id)initWithAccessKey:requestURLString:params:;
- (id)requestURLString;
- (void)setRequestURLString:;
- (void)setRetryCount:;
- (long long)retryCount;
- (void).cxx_destruct;
- (id)params;
- (id)accessKey;
- (void)setAccessKey:;
- (void)setParams:;
@end
