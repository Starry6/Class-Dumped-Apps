@interface MRPlaybackSessionRequestMessage : MRProtocolMessage
@property (nonatomic) MRPlaybackSessionRequest request;
@property (nonatomic) MRPlayerPath playerPath;
- (id)request;
- (unsigned long long)type;
- (id)playerPath;
- (id)initWithRequest:forPlayerPath:;
@end
