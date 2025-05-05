@interface IESECShopPopupTask : NSObject
@property (nonatomic) Q triggerTime;
@property (nonatomic) Q priority;
@property (nonatomic) BOOL canShow;
@property (nonatomic) BOOL showContinue;
@property (nonatomic) <IESECShopPopupProtocol> popup;
- (BOOL)canShow;
- (void)setTriggerTime:;
- (void)setCanShow:;
- (void)setShowContinue:;
- (BOOL)showContinue;
- (unsigned long long)triggerTime;
- (void)setPriority:;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (id)popup;
- (void)setPopup:;
@end
