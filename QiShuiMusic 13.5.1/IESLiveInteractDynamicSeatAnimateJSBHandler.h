@interface IESLiveInteractDynamicSeatAnimateJSBHandler : NSObject
@property (nonatomic) @? invokeEventBlock;
- (void)callFinishSeatAnimate:;
- (void)enumeratePositionItems:seats:usingBlock:;
- (void)handleSeatAnimateJSBParams:seats:;
- (id)invokeEventBlock;
- (void)setInvokeEventBlock:;
- (id)viewForItemID:seats:;
- (void).cxx_destruct;
@end
