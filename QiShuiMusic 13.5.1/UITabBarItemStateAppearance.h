@interface UITabBarItemStateAppearance : NSObject
@property (nonatomic) _UITabBarItemData _data;
@property (nonatomic) NSArray itemEffects;
@property (nonatomic) NSDictionary titleTextAttributes;
@property (nonatomic) {UIOffset=dd} titlePositionAdjustment;
@property (nonatomic) UIColor iconColor;
@property (nonatomic) {UIOffset=dd} badgePositionAdjustment;
@property (nonatomic) UIColor badgeBackgroundColor;
@property (nonatomic) NSDictionary badgeTextAttributes;
@property (nonatomic) {UIOffset=dd} badgeTitlePositionAdjustment;
- (void)setTitlePositionAdjustment:;
- (id)badgeBackgroundColor;
- (id)init;
- (id)titlePositionAdjustment;
- (void)setTitleTextAttributes:;
- (void)_setData:;
- (id)_data;
- (void).cxx_destruct;
- (id)titleTextAttributes;
- (void)_writeToStorage:;
- (id)_initWithOwner:data:state:;
- (void)_clearOwner;
- (id)iconColor;
- (void)setIconColor:;
- (id)badgeTextAttributes;
- (void)setBadgeTextAttributes:;
- (id)badgeTitlePositionAdjustment;
- (void)setBadgeTitlePositionAdjustment:;
- (void)setBadgeBackgroundColor:;
- (id)badgePositionAdjustment;
- (void)setBadgePositionAdjustment:;
- (id)itemEffects;
- (void)setItemEffects:;
@end
