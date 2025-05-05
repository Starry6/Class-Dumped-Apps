@interface BPSDirectAssocationCorrelateHandler : BPSCorrelateHandler
- (void)receivePriorEvent:;
- (void)receiveCurrentEvent:;
- (void).cxx_destruct;
- (id)correlateWithCurrentEvent:;
- (id)initWithCorrelating:;
@end
