@interface HTSAudioExport : IESMMObject
@property (nonatomic) AVAssetExportSession audioExportSession;
@property (nonatomic) VEAudioReaderUnit audioReaderUnit;
@property (nonatomic) AVAssetWriterInput audioInput;
@property (nonatomic) AVAssetWriter writer;
@property (nonatomic) NSString audioExportDir;
- (id)audioReaderUnit;
- (id)audioExportDir;
- (id)audioExportSession;
- (void)cancelAudioExport;
- (void)exportAllAudioSoundInVideoData:completion:;
- (void)exportAllAudioSoundInVideoData:customParams:completion:;
- (BOOL)exportAudioWithVideoData:completion:;
- (BOOL)exportAudioWithVideoData:exportAudioType:completion:;
- (BOOL)exportAudioWithVideoData:isOriSound:completion:;
- (void)exportM4aProcess:videoItem:completion:;
- (BOOL)exportVideoSoundSourceWithVideoData:applyAudioMix:completion:;
- (double)getAudioExportProgress;
- (void)setAudioExportDir:;
- (void)setAudioExportSession:;
- (void)setAudioReaderUnit:;
- (void)setWriter:;
- (void).cxx_destruct;
- (id)writer;
- (id)audioInput;
- (void)setAudioInput:;
@end
