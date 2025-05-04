@interface AWEEcommerceSearchGeckoResourcesHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)prepareGeckoResourcesWithGeckoChannel:;
- (void)prepareEcommerceSearchGeckoResources;
- (id)lottiePathWithGeckoChannel:JsonPath:;
- (id)resourcesPathWithGeckoChannel:filePath:;
+ (id)sharedInstance;
@end
