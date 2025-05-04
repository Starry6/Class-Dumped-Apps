@interface AWECoverNLEEditorRevertRecord : NSObject
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) <ACCEditorRecoverServiceProtocol> recoverService;
@property (nonatomic) <ACCStickerServiceProtocol> stickerService;
@property (nonatomic) @? undoCompletion;
@property (nonatomic) @? redoCompletion;
- (id)editService;
- (void)setEditService:;
- (id)stickerService;
- (void)setStickerService:;
- (id)recoverService;
- (void)setRecoverService:;
- (id)initWithServiceProvider:repository:;
- (id)undoCompletion;
- (void)setUndoCompletion:;
- (id)redoCompletion;
- (void)setRedoCompletion:;
- (id)repository;
- (void)redo;
- (void).cxx_destruct;
- (void)undo;
- (void)setRepository:;
- (id)serviceProvider;
@end
