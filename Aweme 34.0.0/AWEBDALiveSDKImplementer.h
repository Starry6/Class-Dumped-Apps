@interface AWEBDALiveSDKImplementer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachingDIContext;
- (void)transferToURLString:;
- (void)preRenderWebViewWithURLString:title:model:;
- (void)removePreRenderIfNeededWithURLString:;
- (void)preloadMicroAppWithURLStrings:;
- (void)preloadResourceWithModel:;
- (id)originAdInfoWithWindmillModel:;
- (id)adLiveKitService;
- (id)currentCardModel:;
- (id)liveRoomPluginArray;
- (void)fetchAdInfoWithURL:method:params:completionBlock:;
- (void)trackURLs:params:;
- (id)modelToLiveRoom:;
- (id)livePromptViewImpl;
- (void)setupCardWithModel:parentView:promptViewImpl:;
- (BOOL)setupCommerceComponentPreload:;
- (BOOL)tryOpenPageUsingOpenURL:;
- (BOOL)tryOpenPageUsingIronManURL:orientation:;
- (id)liveRoomModuleSettings;
- (void)routeToWebLandPageWithPageModel:routeParams:;
- (void)routeToLynxLandPageWithPageModel:fallbackBlock:;
- (id)routeParamsWithWebURL:adInfo:queries:;
+ (id)shareInstance;
@end
