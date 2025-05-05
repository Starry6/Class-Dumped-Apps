@interface IESLiveLinkLiveRtcAudioSink : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) IESLiveLinkLiveRtc owner;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUserId:owner:;
- (void)onPlaybackAudioFrameBeforeMixing:audioFrame:;
- (void)onRecordAudioFrame:;
- (void)onPlaybackAudioFrame:;
- (void)onRemoteUserAudioFrame:audioFrame:;
- (void)onMixedAudioFrame:;
- (id)userId;
- (void)setOwner:;
- (id)owner;
- (void).cxx_destruct;
- (void)setUserId:;
@end
