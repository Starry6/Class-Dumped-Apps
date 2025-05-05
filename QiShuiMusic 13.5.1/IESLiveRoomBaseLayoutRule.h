@interface IESLiveRoomBaseLayoutRule : IESLiveStackDynamicRule
- (id)attachingDIContext;
- (void)executeAtState:managedStack:;
- (void)parseLayout:forContainerIdentifier:;
- (void)parseLayout:ruleController:;
- (void)syncViewTypeForContainer:;
@end
