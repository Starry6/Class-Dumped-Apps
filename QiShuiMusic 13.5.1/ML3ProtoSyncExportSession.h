@interface ML3ProtoSyncExportSession : ML3ExportSession
- (id)end;
- (void).cxx_destruct;
- (id)begin:;
- (id)exportTrackAdded:;
- (id)exportTrackUpdated:;
- (id)exportTrackDeleted:;
- (id)exportPlaylistAdded:;
- (id)exportPlaylistDeleted:;
- (id)initWithLibrary:outputStream:syncType:;
- (id)_writSyncPackageToStream:;
@end
