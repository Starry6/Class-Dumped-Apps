@interface AWEFavoriteManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showMixCollectionList;
- (void)requestFavoriteItemWithID:type:action:completion:;
- (void)requestRawFavoriteItemWithConfig:completion:;
- (id)p_getUrlStringWithType:;
- (id)p_getParamsWithID:extraID:type:action:enterFrom:extraParams:model:;
- (BOOL)shouldShowMixsCollectionList;
- (id)createListDataControllerWithType:;
+ (void)reloadFavoriteDataIfNeeded:;
+ (id)sharedInstance;
@end
