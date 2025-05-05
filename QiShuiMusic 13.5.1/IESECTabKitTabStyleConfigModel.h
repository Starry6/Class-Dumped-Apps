@interface IESECTabKitTabStyleConfigModel : MTLModel
@property (nonatomic) IESECTabKitTabStyleModel normalStyle;
@property (nonatomic) IESECTabKitTabStyleModel selectedStyle;
@property (nonatomic) IESECTabKitTabBadgeConfigModel badgeConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setNormalStyle:;
- (void)setBadgeConfig:;
- (id)badgeConfig;
- (id)normalStyle;
- (id)selectedStyle;
- (void)setSelectedStyle:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)JSONKeyPathsByPropertyKey;
@end
