@interface AWELynxCardOpenAdPageMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString webUrl;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) NSString openUrl;
@property (nonatomic) NSString mpUrl;
@property (nonatomic) NSString wechatMpInfo;
@property (nonatomic) NSDictionary logData;
@property (nonatomic) NSString webTitle;
- (id)lynxUrl;
- (void)setWebTitle:;
- (id)wechatMpInfo;
- (id)mpUrl;
- (id)openUrl;
- (id)webTitle;
- (void)setOpenUrl:;
- (void)setLynxUrl:;
- (void)setMpUrl:;
- (void)setWechatMpInfo:;
- (id)logData;
- (void)setLogData:;
- (void).cxx_destruct;
- (void)setWebUrl:;
- (id)webUrl;
+ (BOOL)automaticallyDefaultMapping;
@end
