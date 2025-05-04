@interface AWEOFGGeneralContainerService : HTSService
@property (nonatomic) WKWebView webview;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) UIImage searchImgTempCache;
@property (nonatomic) NSHashTable containerList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)didActionSheetDismiss:;
- (void)trackEvent:params:;
- (id)containerList;
- (void)setContainerList:;
- (void)initServiceData;
- (id)longPressRootMenu:webview:config:;
- (void)onLongPressImageInWebView:imageURL:config:;
- (void)tryHideGeneralContainerRightNavBarButton:;
- (BOOL)shouldHideRightNavBarButton:;
- (void)setSearchImgTempCache:;
- (id)searchImgTempCache;
- (void).cxx_destruct;
- (void)image:didFinishSavingWithError:contextInfo:;
- (id)webview;
- (void)setWebview:;
@end
