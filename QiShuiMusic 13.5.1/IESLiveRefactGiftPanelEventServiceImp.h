@interface IESLiveRefactGiftPanelEventServiceImp : NSObject
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
- (id)disposable;
- (id)giftPanelDataSharing;
- (void)setDisposable:;
- (void)setGiftPanelDataSharing:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
