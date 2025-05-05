@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession
- (void)_previewStreamDidOpen;
- (void)_serverDied;
- (void)dealloc;
- (id)_initWithRemoteViewfinderSession:delegateStorage:;
- (void)_clientDisconnectedFromServer;
- (void)openPreviewStreamWithOptions:;
- (void)_previewStreamDidCloseWithStatus:;
- (void)closePreviewStream;
@end
