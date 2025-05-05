@interface BKMatchPearlResultInfo : BKMatchResultInfo
@property (nonatomic) q feedback;
@property (nonatomic) Q periocularMatchState;
- (long long)feedback;
- (unsigned long long)periocularMatchState;
- (id)initWithServerIdentity:details:device:;
@end
