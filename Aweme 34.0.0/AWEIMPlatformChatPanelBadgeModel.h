@interface AWEIMPlatformChatPanelBadgeModel : MTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray exitConfigs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)exitConfigs;
- (void)setExitConfigs:;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)copyWithZone:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)exitConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
