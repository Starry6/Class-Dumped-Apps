@interface AWEPluginFavoritesCustomImpl : NSObject
@property (nonatomic) UIViewController guideVC;
@property (nonatomic) UIImageView staticView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getSettings;
- (id)descString;
- (id)guideVC;
- (void)setGuideVC:;
- (void)setStaticView:;
- (void)showCancelToastWithUniqueId:;
- (id)bdp_hostGameGuideViewWithUniqueId:extraInfo:;
- (id)getCurrentUserIDWithAppID:;
- (void)cancelFavoriteWithUniqueId:;
- (void)event:uniqueID:param:;
- (BOOL)bdp_showFavoritesButtonForType:;
- (BOOL)bdp_removeFromFavoritesForType:uniqueId:extraInfo:;
- (BOOL)bdp_addToFavoritesForType:uniqueId:extraInfo:;
- (id)imageURL;
- (void).cxx_destruct;
- (id)titleString;
- (id)staticView;
+ (id)sharedPlugin;
@end
