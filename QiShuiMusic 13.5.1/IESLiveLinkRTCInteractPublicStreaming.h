@interface IESLiveLinkRTCInteractPublicStreaming : NSObject
@property (nonatomic) IESLiveLinkRTCInteractPublicStreamLayout layout;
@property (nonatomic) IESLiveLinkRTCInteractPublicStreamVideoConfig video;
@property (nonatomic) IESLiveLinkRTCInteractPublicStreamAudioConfig audio;
@property (nonatomic) NSString publicStreamId;
- (id)publicStreamId;
- (void)setPublicStreamId:;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (id)audio;
- (void)setAudio:;
@end
