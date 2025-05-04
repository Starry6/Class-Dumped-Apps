@interface AWEBasicGeckoResourcesHelper : NSObject
@property (nonatomic) NSString firstSubPath;
@property (nonatomic) NSString secondSubPath;
@property (nonatomic) NSString suffix;
- (void)imageWithName:localName:dynamicTheme:theme:complete:;
- (void)prepareGeckoResourcesWithGeckoChannel:;
- (id)imagePathWithGeckoChannel:name:dynamicTheme:theme:;
- (id)currentThemeStringWith:theme:;
- (BOOL)is2XScreen;
- (id)imageCDNPathWithName:;
- (void)setFirstSubPath:;
- (void)setSecondSubPath:;
- (id)firstSubPath;
- (id)secondSubPath;
- (id)cdnHost;
- (void)prepareEcommerceSearchGeckoResources;
- (id)lottiePathWithGeckoChannel:JsonPath:;
- (void).cxx_destruct;
- (void)setSuffix:;
- (id)suffix;
- (id)channelId;
+ (id)sharedInstance;
@end
