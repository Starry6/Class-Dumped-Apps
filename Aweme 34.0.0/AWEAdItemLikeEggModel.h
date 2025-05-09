@interface AWEAdItemLikeEggModel : MTLModel
@property (nonatomic) NSString sourceURL;
@property (nonatomic) AWEURLModel sourceURLList;
@property (nonatomic) NSString sourceType;
@property (nonatomic) q subType;
@property (nonatomic) NSString webUrl;
@property (nonatomic) NSString likeButtonAnimationUrl;
@property (nonatomic) NSString likeEggAlphaVideo;
@property (nonatomic) NSString logoIconUrl;
@property (nonatomic) double appearCountDown;
@property (nonatomic) double disappearCountDown;
@property (nonatomic) NSString likeIconTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString webURL;
@property (nonatomic) NSString webTitle;
@property (nonatomic) NSString openURL;
@property (nonatomic) BOOL isH5;
@property (nonatomic) BOOL isLynx;
@property (nonatomic) NSString lynxURL;
@property (nonatomic) NSMutableDictionary componentStages;
@property (nonatomic) <AWEAdPreloadComponentContext> componentContext;
- (id)componentContext;
- (void)setComponentContext:;
- (double)appearCountDown;
- (id)likeIconTitle;
- (id)likeEggAlphaVideo;
- (double)disappearCountDown;
- (id)likeButtonAnimationUrl;
- (id)logoIconUrl;
- (id)sourceURLList;
- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (id)componentStages;
- (void)setComponentStages:;
- (void)setSourceURLList:;
- (void)setLikeButtonAnimationUrl:;
- (void)setLikeEggAlphaVideo:;
- (void)setLogoIconUrl:;
- (void)setAppearCountDown:;
- (void)setDisappearCountDown:;
- (void)setLikeIconTitle:;
- (void)setSourceType:;
- (id)sourceType;
- (id)init;
- (id)sourceURL;
- (id)componentType;
- (long long)subType;
- (void).cxx_destruct;
- (void)setSourceURL:;
- (void)setSubType:;
- (void)setWebUrl:;
- (id)webUrl;
+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:;
@end
