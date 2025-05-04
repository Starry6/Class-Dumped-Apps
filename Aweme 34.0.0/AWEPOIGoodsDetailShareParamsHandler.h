@interface AWEPOIGoodsDetailShareParamsHandler : NSObject
+ (id)prepareShareCompletionWithBridgeCallback:;
+ (void)shareWithNavigationBarVM:;
+ (void)shareWithDeliveryMenuBarVM:;
+ (id)appendUrlDictWithInfo:;
+ (id)parseTokenUrlWithParams:commandShareParams:appendUrlDict:clientLifeShareExt:;
+ (id)handleIMWithIMExtra:lifeShareExt:commonTrackParams:;
+ (id)replaceShareUrl:withClientParams:;
+ (void)shareWithJSBParamModel:completionHandler:;
@end
