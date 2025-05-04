@interface AWECoverNLEEditorRevertGestureRecord : AWECoverNLEEditorRevertRecord
@property (nonatomic) ACCTemplateTextStickerView contentView;
@property (nonatomic) NSMutableArray currentStartGestures;
@property (nonatomic) AWECoverNLEEditorRevertGestureRecordConfig oldConfig;
@property (nonatomic) AWECoverNLEEditorRevertGestureRecordConfig currentConfig;
- (id)oldConfig;
- (void)setOldConfig:;
- (id)currentStartGestures;
- (void)setCurrentStartGestures:;
- (id)init;
- (id)contentView;
- (void)setCurrentConfig:;
- (void)redo;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)undo;
- (id)currentConfig;
@end
