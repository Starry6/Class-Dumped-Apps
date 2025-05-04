@interface AWESharePlatformSDKSetting : MTLModel
@property (nonatomic) AWEShareSpecifiedPlatformSDKSetting qqShareSDK;
@property (nonatomic) AWEShareSpecifiedPlatformSDKSetting wechatShareSDK;
@property (nonatomic) AWEShareSpecifiedPlatformSDKSetting weiboShareSDK;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)wechatShareSDK;
- (id)qqShareSDK;
- (id)weiboShareSDK;
- (void)setQqShareSDK:;
- (void)setWechatShareSDK:;
- (void)setWeiboShareSDK:;
- (void).cxx_destruct;
+ (id)qqShareSDKJSONTransformer;
+ (id)wechatShareSDKJSONTransformer;
+ (id)weiboShareSDKJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
