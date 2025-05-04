@interface AWEStickerApplyPerformanceHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel selectedSticker;
@property (nonatomic) IESEffectModel restoreSticker;
@property (nonatomic) NSString lastRestoringStickerID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectedSticker;
- (void)setSelectedSticker:;
- (void)flowServiceStateDidChanged:preState:;
- (void)handlerDidBecomeActive;
- (void)camera:didApplySticker:success:;
- (void)camera:didTakeAction:error:data:;
- (void)setRestoreSticker:;
- (id)restoreSticker;
- (void)setLastRestoringStickerID:;
- (void)trackEditToRecordDurationIfNeeded;
- (id)lastRestoringStickerID;
- (void)rollbackEffect;
- (BOOL)shouldClearEffect;
- (void).cxx_destruct;
@end
