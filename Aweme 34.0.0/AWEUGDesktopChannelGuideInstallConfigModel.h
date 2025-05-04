@interface AWEUGDesktopChannelGuideInstallConfigModel : MTLModel
@property (nonatomic) NSString actionScheme;
@property (nonatomic) NSString installType;
@property (nonatomic) NSString installName;
@property (nonatomic) NSString installStyleType;
@property (nonatomic) NSString pipVideoResourcePath;
@property (nonatomic) NSString pipVideoResourceUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionScheme;
- (id)installStyleType;
- (id)pipVideoResourcePath;
- (id)pipVideoResourceUrl;
- (void)setPipVideoResourcePath:;
- (void)setActionScheme:;
- (void)setInstallStyleType:;
- (void)setPipVideoResourceUrl:;
- (id)installName;
- (id)installType;
- (void).cxx_destruct;
- (void)setInstallName:;
- (void)setInstallType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
