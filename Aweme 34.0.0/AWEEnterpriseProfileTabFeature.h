@interface AWEEnterpriseProfileTabFeature : AWEFeature
@property (nonatomic) AWEHomepageViewControllerNew homepageVC;
@property (nonatomic) AWEEnterpriseProfileTabConfiguration configuration;
@property (nonatomic) AWEEnterpriseProfileTabConfiguration protocolConfiguration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reactID;
- (id)homepageVC;
- (void)invokeJSWithParameters:;
- (id)collectionViewContentOffset;
- (void)setHomepageVC:;
- (unsigned long long)featureType;
- (void)setConfiguration:;
- (id)view;
- (void)reload;
- (id)viewController;
- (void).cxx_destruct;
- (id)configuration;
- (id)protocolConfiguration;
- (void)setProtocolConfiguration:;
+ (id)aliasName;
@end
