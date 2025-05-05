@interface IESECLiveRoomCart : MTLModel
@property (nonatomic) BOOL showCart;
@property (nonatomic) IESECLiveCartAbilityConfig vertical;
@property (nonatomic) IESECLiveCartAbilityConfig horizontal;
@property (nonatomic) IESECLiveCartIconConfig activityIcons;
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
