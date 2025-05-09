@interface AWEAdSegueModel : MTLModel
@property (nonatomic) NSString webUrl;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString openUrl;
@property (nonatomic) NSString mpUrl;
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) NSString event;
@property (nonatomic) NSString refer;
@property (nonatomic) AWEAdWeChatMiniAppInfo wechatMpInfo;
@property (nonatomic) BOOL isFromLandingPage;
@property (nonatomic) NSString webTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxUrl;
- (void)setRefer:;
- (void)setWebTitle:;
- (id)wechatMpInfo;
- (BOOL)isFromLandingPage;
- (id)refer;
- (id)mpUrl;
- (id)openUrl;
- (id)webTitle;
- (void)setOpenUrl:;
- (void)setLynxUrl:;
- (void)setMpUrl:;
- (void)setWechatMpInfo:;
- (void)setIsFromLandingPage:;
- (void)setEvent:;
- (void).cxx_destruct;
- (id)event;
- (id)imageUrl;
- (void)setImageUrl:;
- (void)setWebUrl:;
- (id)webUrl;
+ (BOOL)automaticallyDefaultMapping;
+ (id)wechatMpInfoJSONTransformer;
@end
