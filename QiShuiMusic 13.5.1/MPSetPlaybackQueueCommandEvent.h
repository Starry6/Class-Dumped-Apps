@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent
@property (nonatomic) MPRemotePlaybackQueue playbackQueue;
@property (nonatomic) NSNumber privateListeningOverride;
@property (nonatomic) NSString sessionIdentifierOverride;
- (id)playbackQueue;
- (void).cxx_destruct;
- (id)initWithCommand:mediaRemoteType:options:;
- (id)privateListeningOverride;
- (id)initWithCommand:playbackQueue:;
- (id)sessionIdentifierOverride;
@end
