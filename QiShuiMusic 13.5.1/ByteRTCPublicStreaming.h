@interface ByteRTCPublicStreaming : NSObject
@property (nonatomic) ByteRTCPublicStreamLayout layout;
@property (nonatomic) ByteRTCPublicStreamVideoConfig video;
@property (nonatomic) ByteRTCPublicStreamAudioConfig audio;
@property (nonatomic) NSString roomId;
- (id)roomId;
- (void)setRoomId:;
- (void)setLayout:;
- (id)layout;
- (void).cxx_destruct;
- (void)setVideo:;
- (id)video;
- (id)audio;
- (void)setAudio:;
+ (id)defaultPublicStreaming;
@end
