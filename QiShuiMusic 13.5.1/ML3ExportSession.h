@interface ML3ExportSession : NSData
@property (nonatomic) ML3MusicLibrary library;
@property (nonatomic) NSOutputStream outputStream;
- (id)end;
- (id)library;
- (void).cxx_destruct;
- (id)outputStream;
- (id)begin:;
- (id)initWithLibrary:outputStream:;
- (id)exportTrackAdded:;
- (id)exportTrackUpdated:;
- (id)exportTrackDeleted:;
- (id)exportPlaylistAdded:;
- (id)exportPlaylistDeleted:;
@end
