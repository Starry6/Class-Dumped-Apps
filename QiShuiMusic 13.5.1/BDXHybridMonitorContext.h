@interface BDXHybridMonitorContext : BDXSubContext
@property (nonatomic) NSString virtualAid;
@property (nonatomic) NSString containerBid;
- (id)containerBid;
- (void)mergeContext:shouldOverride:;
- (void)setContainerBid:;
- (void)setVirtualAid:;
- (id)virtualAid;
- (void).cxx_destruct;
@end
