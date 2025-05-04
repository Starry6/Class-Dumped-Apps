@interface AWECommerceSettingsModel : AWEBaseApiModel
@property (nonatomic) AWEDouplusToastModel douplusToastModel;
@property (nonatomic) NSString IAPRefundString;
@property (nonatomic) NSString avatarDecorationURL;
@property (nonatomic) BOOL avatarDecorationEnabled;
@property (nonatomic) BOOL isAlertIAPUnwork;
@property (nonatomic) NSArray douplusIAPProductIDs;
@property (nonatomic) BOOL douplusNativeSceneSwitch;
@property (nonatomic) q douplusNativeScenePeriod;
- (BOOL)douplusNativeSceneSwitch;
- (long long)douplusNativeScenePeriod;
- (id)douplusToastModel;
- (void)setDouplusToastModel:;
- (id)IAPRefundString;
- (void)setIAPRefundString:;
- (id)avatarDecorationURL;
- (void)setAvatarDecorationURL:;
- (BOOL)avatarDecorationEnabled;
- (void)setAvatarDecorationEnabled:;
- (BOOL)isAlertIAPUnwork;
- (void)setIsAlertIAPUnwork:;
- (id)douplusIAPProductIDs;
- (void)setDouplusIAPProductIDs:;
- (void)setDouplusNativeSceneSwitch:;
- (void)setDouplusNativeScenePeriod:;
- (void).cxx_destruct;
+ (id)douplusToastModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
