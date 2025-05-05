@interface IESLiveSaaSVSConfigDrawer : BDDynamicMTLModel
@property (nonatomic) IESLiveSaaSMatchDrawer drawer;
@property (nonatomic) BOOL hasDrawer;
@property (nonatomic) IESLiveSaaSImage drawerLabel;
@property (nonatomic) BOOL hasDrawerLabel;
@property (nonatomic) IESLiveSaaSImage drawerBackground;
@property (nonatomic) BOOL hasDrawerBackground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasDrawer;
- (BOOL)hasDrawerBackground;
- (BOOL)hasDrawerLabel;
- (void)setHasDrawer:;
- (void)setHasDrawerBackground:;
- (void)setHasDrawerLabel:;
+ (id)drawerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
