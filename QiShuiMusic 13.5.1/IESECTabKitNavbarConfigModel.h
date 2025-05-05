@interface IESECTabKitNavbarConfigModel : MTLModel
@property (nonatomic) BOOL hidden;
@property (nonatomic) IESECTabKitNavItemConfigModel itemConfig;
@property (nonatomic) NSArray rightItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemConfig;
- (void)setItemConfig:;
- (BOOL)hidden;
- (void).cxx_destruct;
- (void)setHidden:;
- (id)rightItems;
- (void)setRightItems:;
+ (id)rightItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
