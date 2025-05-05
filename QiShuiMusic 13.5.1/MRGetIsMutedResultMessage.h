@interface MRGetIsMutedResultMessage : MRProtocolMessage
@property (nonatomic) BOOL muted;
- (BOOL)isMuted;
- (id)initWithIsMuted:;
- (unsigned long long)type;
@end
