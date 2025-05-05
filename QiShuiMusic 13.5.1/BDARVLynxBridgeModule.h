@interface BDARVLynxBridgeModule : BDARVLynxBaseBridgeModule
@property (nonatomic) BOOL hasShownWebView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasShownWebView;
- (void)downloadApp:successCallback:failCallback:;
- (void)enterLive:;
- (id)findLiveViewWithView:;
- (id)initWithParam:;
- (id)monitorCategoryData;
- (id)monitorExtraData;
- (void)monitorLynxJSBErrorWithErrorType:;
- (void)openLink:successCallback:failCallback:;
- (void)openPlayableURL:successCallback:failCallback:;
- (void)openScheme:successCallback:failCallback:;
- (void)openWebURL:successCallback:failCallback:;
- (void)resolveActionWithParams:payloadData:;
- (void)sendMonitor:;
- (void)setHasShownWebView:;
- (void)trackv3:;
- (void)remove;
- (void)track:;
+ (id)methodLookup;
+ (id)name;
@end
