@interface AWEECOMIMDynamicCardTemplateCardBridgeHelper : NSObject
+ (void)beginHandleActionWithContext:buttonName:params:;
+ (void)appendCustomActionList:context:;
+ (void)trackBtnTapWithButtonName:unitBtmId:context:;
+ (void)handleActionList:params:context:completion:;
+ (void)dealOpenSkuSelectPanelActionProductionId:skuURL:uuid:channelParams:context:;
+ (void)openURL:unitBtmId:scene:context:;
+ (void)openURL:context:;
+ (void)trackErrorWithErrorActionType:errorCode:errorMsg:otherParams:context:;
+ (void)handleActionResultCallbackWithActionType:errorMsg:context:;
+ (id)btmPageIdWithContext:;
+ (BOOL)canOpenURL:context:;
+ (id)generateBridgeParamsWithOptions:params:;
@end
