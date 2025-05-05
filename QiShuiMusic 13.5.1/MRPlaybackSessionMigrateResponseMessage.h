@interface MRPlaybackSessionMigrateResponseMessage : MRProtocolMessage
@property (nonatomic) MRPlaybackSessionMigrateRequest request;
- (id)initWithRequest:;
- (id)request;
- (unsigned long long)type;
@end
