@interface AWEStickerApplyRecordPropLocationHandler : AWEStickerApplyBaseHandler
@property (nonatomic) IESEffectModel appliedSticker;
- (void)camera:didApplySticker:success:;
- (void)camera:didRecvMessage:;
- (void)camera:didTakeAction:error:data:;
- (void)setAppliedSticker:;
- (id)appliedSticker;
- (void).cxx_destruct;
@end
