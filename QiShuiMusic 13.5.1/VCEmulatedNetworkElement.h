@interface VCEmulatedNetworkElement : NSObject
@property (nonatomic) @? processCompleteHandler;
- (int)write:;
- (void)dealloc;
- (id)initWithPolicies:;
- (void)runUntilTime:;
- (void)drainAndReleasePackets;
- (void)connectTo:;
- (void)connectFrom:;
- (id)processCompleteHandler;
- (void)setProcessCompleteHandler:;
@end
