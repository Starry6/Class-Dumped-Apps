@interface AWEBasicModeTabBarItemsConfig : NSObject
@property (nonatomic) q selectedItemType;
@property (nonatomic) BOOL feedTabSelected;
@property (nonatomic) BOOL familiarTabSelected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabBarItemTypes;
- (BOOL)isFamiliarTabSelected;
- (long long)getLandTabItemType;
- (long long)getMainTabItemType;
- (id)aAWEBizTabBarModuleServiceCommonAdapter;
- (void)setFeedTabSelected:;
- (void)setFamiliarTabSelected:;
- (BOOL)isFeedTabSelected;
- (long long)selectedItemType;
- (void)setSelectedItemType:;
+ (id)currentReferStringForTabItemType:;
+ (Class)aAWEBizTabBarModuleServiceCommonAdapterClass;
+ (id)sharedInstance;
@end
