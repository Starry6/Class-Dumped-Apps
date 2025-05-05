@interface IESLiveSaaSECRoomCart : MTLModel
@property (nonatomic) BOOL showCart;
@property (nonatomic) IESLiveSaaSECCartAbilityConfig vertical;
@property (nonatomic) IESLiveSaaSECCartAbilityConfig horizontal;
@property (nonatomic) IESLiveSaaSECCartIconConfig activityIcons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityIcons;
- (void)setActivityIcons:;
- (void)setShowCart:;
- (BOOL)showCart;
- (void)setVertical:;
- (id)vertical;
- (void).cxx_destruct;
- (id)horizontal;
- (void)setHorizontal:;
+ (id)activityIconsJSONTransformer;
+ (id)horizontalJSONTransformer;
+ (id)verticalJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
