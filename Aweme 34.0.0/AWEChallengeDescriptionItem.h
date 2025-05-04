@interface AWEChallengeDescriptionItem : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) AWEChallengeDownloadComponent downloadComponent;
@property (nonatomic) AWEChallengWechatMiniAppInfo wechatMiniApp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downloadComponent;
- (void)setDownloadComponent:;
- (id)wechatMiniApp;
- (void)setWechatMiniApp:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)downloadComponentJSONTransformer;
+ (id)wechatMiniAppJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
