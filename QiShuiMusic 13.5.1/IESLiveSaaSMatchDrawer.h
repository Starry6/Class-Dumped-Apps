@interface IESLiveSaaSMatchDrawer : BDDynamicMTLModel
@property (nonatomic) NSString entryName;
@property (nonatomic) IESLiveSaaSImage entryIcon;
@property (nonatomic) BOOL hasEntryIcon;
@property (nonatomic) NSString drawerTitle;
@property (nonatomic) IESLiveSaaSImage drawerBackground;
@property (nonatomic) BOOL hasDrawerBackground;
@property (nonatomic) NSString returnBtnText;
@property (nonatomic) NSInteger displayMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasDrawerBackground;
- (BOOL)hasEntryIcon;
+ (id)drawerBackgroundJSONTransformer;
+ (id)entryIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
