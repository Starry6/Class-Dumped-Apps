@interface BDACSConfigModel : NSObject
@property (nonatomic) BDACSResourceConfig resourceConfig;
@property (nonatomic) BDACSWebReportConfig webReport;
@property (nonatomic) BDACSPornInspectConfig pornInspect;
@property (nonatomic) BDACSiOSConfig iOSConfig;
@property (nonatomic) Q type;
@property (nonatomic) NSString cid;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString URLHost;
- (BOOL)enableWebReport;
- (BOOL)enableProcessor;
- (BOOL)enablePornInspect;
- (id)iOSConfig;
- (id)initWithCid:logExtra:URLHost:;
- (id)initWithWebViewClientSecuritySettings:cid:logExtra:URLHost:;
- (id)logExtra;
- (id)pornInspect;
- (void)recordUpload;
- (id)resourceConfig;
- (BOOL)shouldEnableInterceptor;
- (id)webReport;
- (id)cid;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)URLHost;
@end
