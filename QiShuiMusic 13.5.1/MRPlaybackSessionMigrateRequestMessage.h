@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage
@property (nonatomic) MRPlaybackSession playbackSession;
@property (nonatomic) MRPlaybackSessionMigrateRequest request;
@property (nonatomic) MRPlayerPath playerPath;
- (id)request;
- (unsigned long long)type;
- (id)playerPath;
- (id)playbackSession;
- (id)initWithPlaybackSession:request:forPlayerPath:;
@end
