@interface RPTBlockInteraction : NSObject
@property (nonatomic) @? actionsComposer;
- (void).cxx_destruct;
- (id)initWithActions:;
- (void)invokeWithComposer:duration:;
- (id)actionsComposer;
- (void)setActionsComposer:;
@end
