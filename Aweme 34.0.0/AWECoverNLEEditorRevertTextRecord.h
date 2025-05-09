@interface AWECoverNLEEditorRevertTextRecord : AWECoverNLEEditorRevertRecord
@property (nonatomic) q recordType;
@property (nonatomic) q stickerId;
@property (nonatomic) q index;
@property (nonatomic) ACCTextStickerView textStickerView;
@property (nonatomic) ACCGestureResponsibleStickerView gestureResponsibleStickerView;
@property (nonatomic) @? deleteUndoBlock;
@property (nonatomic) AWECoverNLEEditorRevertTextRecordConfig oldConfig;
@property (nonatomic) AWECoverNLEEditorRevertTextRecordConfig currentConfig;
- (long long)stickerId;
- (void)setStickerId:;
- (id)oldConfig;
- (void)setOldConfig:;
- (id)textStickerView;
- (id)deleteUndoBlock;
- (id)gestureResponsibleStickerView;
- (void)setTextStickerView:;
- (void)setGestureResponsibleStickerView:;
- (void)setDeleteUndoBlock:;
- (void)setIndex:;
- (long long)index;
- (id)init;
- (long long)recordType;
- (void)setCurrentConfig:;
- (void)redo;
- (void).cxx_destruct;
- (void)undo;
- (void)setRecordType:;
- (id)currentConfig;
@end
