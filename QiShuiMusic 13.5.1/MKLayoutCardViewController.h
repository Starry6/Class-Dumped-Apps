@interface MKLayoutCardViewController : MKStackingViewController
@property (nonatomic) NSMutableDictionary cacheVC;
@property (nonatomic) NSMutableDictionary cacheModuleType;
@property (nonatomic) MKMapItem mapItem;
- (id)mapItem;
- (void)setMapItem:;
- (void).cxx_destruct;
- (BOOL)isLayoutDynamic;
- (id)_createViewControllerForModule:;
- (BOOL)isTransitItem;
- (id)_layoutModuleForMapItem;
- (void)_createModuleLayout:;
- (id)_cachedViewControllerForModule:;
- (id)cacheVC;
- (void)setCacheVC:;
- (id)cacheModuleType;
- (void)setCacheModuleType:;
@end
