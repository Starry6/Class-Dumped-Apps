@interface nw_interpose_flow : NSObject
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)initWithInterface:registration:eventHandler:;
- (void)notifyFlowEvent:;
- (void)closeFlow;
- (void)clearFlowEventHandler;
- (void)resetFlow:;
- (BOOL)matchNexusAgent:;
- (BOOL)matchNexusAgentWithFlow:;
- (BOOL)matchNexusInstance:;
@end
