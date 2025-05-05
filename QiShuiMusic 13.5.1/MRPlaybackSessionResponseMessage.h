@interface MRPlaybackSessionResponseMessage : MRProtocolMessage
@property (nonatomic) MRPlaybackSession playbackSession;
- (unsigned long long)type;
- (id)playbackSession;
- (id)initWithPlaybackSession:;
@end
