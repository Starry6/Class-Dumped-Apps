@interface BPSCorrelateHandler : NSObject
@property (nonatomic) @ context;
- (id)init;
- (void)receivePriorEvent:;
- (id)context;
- (void)receiveCurrentEvent:;
- (void).cxx_destruct;
- (id)correlateWithCurrentEvent:;
- (void)setContext:;
- (id)initWithInitalContext:;
- (id)initWithInitialContext:;
- (void)updateContext:;
+ (id)new;
+ (id)directStreamsAssociationWithBlock:;
@end
