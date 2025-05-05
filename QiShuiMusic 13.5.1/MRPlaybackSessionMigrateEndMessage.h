@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage
@property (nonatomic) MRPlaybackSessionRequest request;
@property (nonatomic) NSError error;
@property (nonatomic) MRPlayerPath playerPath;
- (id)error;
- (id)request;
- (unsigned long long)type;
- (id)playerPath;
- (id)initWithRequest:error:playerPath:;
@end
