@interface CSJWebViewJSBridgeHandler : NSObject
@property (nonatomic) CSJWKWebViewClient webView;
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) <CSJAd> adInfo;
@property (nonatomic) CSJDislikeContext dislikeContext;
@property (nonatomic) NSString stashCid;
@property (nonatomic) NSString stashLogExtra;
@property (nonatomic) NSDictionary relatedMaterialMeta;
@property (nonatomic) NSString createExtraString;
@property (nonatomic) CSJViewShowAreaTracker areaTracker;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) @? downloadDidCloseStoreController;
@property (nonatomic) @? adDidClick;
@property (nonatomic) @? makeVisiable;
@property (nonatomic) @? webViewClosed;
@property (nonatomic) @? frameDidChange;
@property (nonatomic) @? interactionAreaInfo;
@property (nonatomic) UIViewController parentVC;
@property (nonatomic) NSDictionary adViewInfo;
@property (nonatomic) NSDictionary estimatedInteractionAreaInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)jsCallNative_sendLogWithParams:;
- (void)p_checkVisiable;
- (id)buJSB3_adViewInfoWithViewModel:;
- (id)downloadDidCloseStoreController;
- (void)setAreaTracker:;
- (id)adDidClick;
- (id)adInfo;
- (id)adSlot;
- (id)adViewInfo;
- (id)areaTracker;
- (id)buJSB3_adInfoStashWithViewModel:;
- (id)buJSB3_adInfoWithViewModel:;
- (void)buJSB3_changeFrameWithViewModel:;
- (id)buJSB3_click_buttonWithViewModel:;
- (id)buJSB3_closeWebviewWithViewModel:;
- (id)buJSB3_commonConvertWithViewModel:;
- (id)buJSB3_download_app_adWithViewModel:;
- (id)buJSB3_dynamicTrackWithViewModel:;
- (id)buJSB3_getATTStatusWithViewModel:;
- (id)buJSB3_getCurrentVisibleStateWithViewModel:;
- (id)buJSB3_getEstimatedInteractionAreaInfoWithViewModel:;
- (id)buJSB3_getMaterialMetaWithViewModel:;
- (id)buJSB3_getNativeSiteCustomDataWithViewModel:;
- (id)buJSB3_interactionAreaInfoWithViewModel:;
- (id)buJSB3_makeVisibleWithViewModel:;
- (id)buJSB3_openAdLandPageLinksWithViewModel:;
- (id)buJSB3_sendLogWithViewModel:;
- (void)buildRelatedMaterialMeta;
- (id)createExtraString;
- (id)dislikeContext;
- (id)estimatedInteractionAreaInfo;
- (id)initWithAdInfo:adSlot:webView:;
- (id)interactionAreaInfo;
- (id)jsCallNative_adInfo;
- (id)jsCallNative_adViewInfoWithParams:;
- (void)jsCallNative_changeFrameWithParams:;
- (void)jsCallNative_click_button;
- (void)jsCallNative_commonConvertWithParams:;
- (id)jsCallNative_download_app_adWithParams:;
- (id)jsCallNative_dynamicTrackWithParams:;
- (id)jsCallNative_getCurrentVisibleStateWithParams:;
- (id)jsCallNative_getEstimatedInteractionAreaInfoWithParams:;
- (id)jsCallNative_getMaterialMeta;
- (id)jsCallNative_getNativeSiteCustomData;
- (id)jsCallNative_interactionAreaInfoWithParams:;
- (void)jsCallNative_makeVisibleWithParams:;
- (void)jsCallNative_openAdLandPageLinksWithParams:;
- (id)makeVisiable;
- (void)openInternalStoreWithMaterial:;
- (void)openWebViewNewPageWithUrl:;
- (id)pbu_urlWithString:;
- (void)registerJSBridge3;
- (void)registerJSBridgePlugin;
- (id)relatedMaterialMeta;
- (void)sendTrackDataFromURLString:;
- (void)sendTrackDataWithParameters:;
- (void)setAdDidClick:;
- (void)setAdSlot:;
- (void)setAdViewInfo:;
- (void)setCreateExtraString:;
- (void)setDislikeContext:;
- (void)setDownloadDidCloseStoreController:;
- (void)setEstimatedInteractionAreaInfo:;
- (void)setInteractionAreaInfo:;
- (void)setIsShowing:;
- (void)setMakeVisiable:;
- (void)setRelatedMaterialMeta:;
- (void)setStashCid:;
- (void)setStashLogExtra:;
- (void)setWebViewClosed:;
- (id)stashCid;
- (id)stashLogExtra;
- (id)trackTag;
- (id)webViewClosed;
- (void)setWebView:;
- (BOOL)isShowing;
- (id)webView;
- (void).cxx_destruct;
- (BOOL)webView:shouldStartLoadWithRequest:navigationType:;
- (id)frameDidChange;
- (void)setFrameDidChange:;
- (id)parentVC;
- (void)setParentVC:;
@end
