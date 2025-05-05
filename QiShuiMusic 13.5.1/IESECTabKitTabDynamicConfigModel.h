@interface IESECTabKitTabDynamicConfigModel : MTLModel
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSString bundleURL;
@property (nonatomic) NSString extra;
@property (nonatomic) Q containerType;
@property (nonatomic) IESECTabKitTabApiConfigModel apiConfig;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} preferredFrame;
@property (nonatomic) Q hybridContainerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURL;
- (id)apiConfig;
- (unsigned long long)hybridContainerType;
- (void)setApiConfig:;
- (void)setExtra:;
- (void)setHybridContainerType:;
- (void)setJumpURL:;
- (id)extra;
- (id)bundleURL;
- (void)setBundleURL:;
- (void).cxx_destruct;
- (unsigned long long)containerType;
- (void)setContainerType:;
- (id)preferredFrame;
- (void)setPreferredFrame:;
+ (id)JSONKeyPathsByPropertyKey;
@end
