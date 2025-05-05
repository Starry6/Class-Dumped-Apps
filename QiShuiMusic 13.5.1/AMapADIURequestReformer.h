@interface AMapADIURequestReformer : AMapAOSRequestReformer
@property (nonatomic) NSString tid;
@property (nonatomic) NSString diu;
@property (nonatomic) NSString diu2;
@property (nonatomic) NSString diu3;
- (void)setDiu:;
- (void)setTid:;
- (id)diu;
- (id)assembledURL:;
- (id)diu2;
- (id)diu3;
- (void)setDiu2:;
- (void)setDiu3:;
- (id)v6BaseURL;
- (id)v6Url;
- (id)url;
- (id)init;
- (id)baseURL;
- (id)method;
- (id)parameters;
- (void).cxx_destruct;
- (id)tid;
- (id)postData;
@end
