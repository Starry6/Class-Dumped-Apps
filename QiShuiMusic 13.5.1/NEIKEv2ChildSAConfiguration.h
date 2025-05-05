@interface NEIKEv2ChildSAConfiguration : NSObject
@property (nonatomic) Q mode;
@property (nonatomic) I replayWindowSize;
@property (nonatomic) BOOL sequencePerTrafficClass;
@property (nonatomic) BOOL preferInitiatorProposalOrder;
@property (nonatomic) NSArray proposals;
@property (nonatomic) NSArray localTrafficSelectors;
@property (nonatomic) NSArray remoteTrafficSelectors;
- (id)init;
- (id)descriptionWithIndent:options:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)mode;
- (void)setMode:;
- (id)copyWithZone:;
- (id)proposals;
- (void)setProposals:;
- (BOOL)preferInitiatorProposalOrder;
- (void)setPreferInitiatorProposalOrder:;
- (unsigned int)replayWindowSize;
- (void)setReplayWindowSize:;
- (BOOL)sequencePerTrafficClass;
- (void)setSequencePerTrafficClass:;
- (id)localTrafficSelectors;
- (void)setLocalTrafficSelectors:;
- (id)remoteTrafficSelectors;
- (void)setRemoteTrafficSelectors:;
@end
