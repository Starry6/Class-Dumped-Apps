@interface AWEPOIDetailAsyncUIExtension : AWEPOIBaseExtension
@property (nonatomic) {CGPoint=dd} originalScrollViewOffset;
- (void)configWithRouterParamDict:;
- (void)setOriginalScrollViewOffset:;
- (id)originalScrollViewOffset;
- (void)pageDidScroll:;
- (void)pageWillBeginDragging:;
- (void)initializeExtension;
- (id)constData;
- (id)aweNearbyModuleService;
- (void)retryAsyncUI;
- (void)poiPageRequestLocationPermissionWithConfig:authorizeBlk:;
- (void)requestAsyncUI;
- (id)dataManager;
@end
