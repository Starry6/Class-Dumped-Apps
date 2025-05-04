@interface AWEECMallGeneralAlertManager : NSObject
@property (nonatomic) BOOL isHandling;
@property (nonatomic) BOOL hasDismissed;
@property (nonatomic) BOOL enablePopupManager;
@property (nonatomic) NSString currentPopupToken;
@property (nonatomic) AWEECMallGeneralAlert currentAlert;
- (void)setEnablePopupManager:;
- (void)setCurrentPopupToken:;
- (BOOL)enablePopupManager;
- (void)setIsHandling:;
- (id)currentPopupToken;
- (void)cancelLastPopup;
- (BOOL)isHandling;
- (void)submitMallGeneralMallAlertWithToken:;
- (void)cancelMallGeneralMallAlertWithToken:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasDismissed;
- (void)setHasDismissed:;
- (void)setCurrentAlert:;
- (id)currentAlert;
+ (id)sharedManager;
@end
