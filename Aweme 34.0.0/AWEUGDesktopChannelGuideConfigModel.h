@interface AWEUGDesktopChannelGuideConfigModel : MTLModel
@property (nonatomic) AWEUGDesktopChannelGuideUIConfigModel UIConfig;
@property (nonatomic) NSDictionary installConfig;
@property (nonatomic) NSString eventExtraString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)installConfig;
- (void)setInstallConfig:;
- (id)UIConfig;
- (void)setUIConfig:;
- (void)setEventExtraString:;
- (id)eventExtraString;
- (void).cxx_destruct;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
