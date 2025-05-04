@interface AWENewVideoCoverDeleteForSwitchStickerViewCommand : AWENewVideoCoverCommand
@property (nonatomic) UIView<ACCStickerProtocol> deleteStickerView;
@property (nonatomic) ACCStickerContainerView stickerContainer;
@property (nonatomic) q deleteLayerIndex;
@property (nonatomic) NLELayer_OC deleteLayer;
- (void)setStickerContainer:;
- (id)stickerContainer;
- (void)realExecute;
- (void)realUnExecute;
- (void)setDeleteLayer:;
- (void)setDeleteStickerView:;
- (id)deleteLayer;
- (long long)deleteLayerIndex;
- (id)deleteStickerView;
- (void)setDeleteLayerIndex:;
- (void).cxx_destruct;
@end
