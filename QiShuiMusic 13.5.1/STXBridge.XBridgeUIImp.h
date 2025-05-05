@interface STXBridge.XBridgeUIImp : NSObject
- (void)hideLoadingInContainer:withParamModel:completionHandler:;
- (void)showActionSheetWithParamModel:completionHandler:;
- (void)showBottomNotificationWithParamModel:completionHandler:;
- (void)showLoadingInContainer:withParamModel:completionHandler:;
- (void)showModalWithParamModel:completionHandler:;
- (void)showToastWithParamModel:completionHandler:;
- (id)init;
@end
