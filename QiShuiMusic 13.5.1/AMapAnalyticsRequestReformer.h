@interface AMapAnalyticsRequestReformer : AMapRequestReformer
@property (nonatomic) NSString product;
@property (nonatomic) q logtype;
@property (nonatomic) NSString platform;
@property (nonatomic) NSString channel;
@property (nonatomic) NSData pData;
@property (nonatomic) NSString signvalue;
@property (nonatomic) NSString sKey;
- (long long)logtype;
- (id)initWithType:postData:;
- (id)pData;
- (id)sKey;
- (void)setLogtype:;
- (void)setPData:;
- (void)setSKey:;
- (id)signvalue;
- (id)signvalueWithData:;
- (id)v6BaseURL;
- (void)setChannel:;
- (void)setPlatform:;
- (id)channel;
- (id)baseURL;
- (id)method;
- (id)parameters;
- (id)platform;
- (void).cxx_destruct;
- (id)postData;
- (id)product;
- (void)setProduct:;
@end
