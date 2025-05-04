@interface AWEStudioMattingVideoService : NSObject
@property (nonatomic) AWEStudioVideoMattingSession mattingSession;
@property (nonatomic) ACCAudioExport audioExporter;
@property (nonatomic) q mattingStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audioExporter;
- (void)setAudioExporter:;
- (void)cancelCurrentMattingExport;
- (void)exportAudioSoundWithPath:videoData:completion:;
- (void)mattingVideoFragmentWithPath:effectModel:completion:;
- (long long)mattingStatus;
- (void)setMattingStatus:;
- (id)updateMattingModelWithSticker:videoPath:;
- (id)mattingSession;
- (void)setMattingSession:;
- (void).cxx_destruct;
@end
