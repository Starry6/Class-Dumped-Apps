@interface AWEPayTransferMoneyUtils : NSObject
+ (void)saveCJPayCache:key:;
+ (void)startFaceRecognizeWithParams:completion:;
+ (void)showAlert:confirmTitle:cancelTitle:confirmBlock:cancelBlock:;
+ (BOOL)tryHandleCommonBizCode:bizMsg:;
+ (id)safeGetValueForKey:fromDict:;
@end
