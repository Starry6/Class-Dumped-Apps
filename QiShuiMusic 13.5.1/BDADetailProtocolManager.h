@interface BDADetailProtocolManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)eventV3:params:isDoubleSending:;
- (id)appScheme;
- (id)checkWebInterceptURL;
- (void)eventData:;
- (id)fontSizeTypeString;
- (void)galleryWithParam:callback:webView:controller:;
- (BOOL)isCurrentDayMode;
- (id)jsbridgeAuthConfigURL;
- (void)monitorService:value:category:extra:;
- (void)monitorService:value:extra:;
- (id)openOtherAppTrackTag;
- (void)openWithParam:callback:webView:controller:;
- (id)preloadV2URL;
- (void)requestForBinaryWithURL:params:method:timeout:callback:;
- (BOOL)routeOpenURL:userInfo:;
- (id)themedColorForKey:;
- (void)trackURLs:event:;
- (void)webviewLoginUrl:;
- (id)init;
- (void)log:;
+ (id)newsProtocolImp;
+ (void)codeInstrumentation:;
+ (id)detailProtocolImp;
+ (void)jsMehtodInstrumentation:;
+ (id)protocolImp;
+ (id)sharedInstance;
@end
