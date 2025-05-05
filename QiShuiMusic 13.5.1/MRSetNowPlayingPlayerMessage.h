@interface MRSetNowPlayingPlayerMessage : MRProtocolMessage
@property (nonatomic) MRPlayerPath playerPath;
- (id)initWithPlayerPath:;
- (unsigned long long)type;
- (id)playerPath;
@end
