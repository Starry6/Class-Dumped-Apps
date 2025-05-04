@interface AWEGrouponLifeFeedsActionCenter : NSObject
@property (nonatomic) AWEGrouponLifeFeedsPageContext pageContext;
@property (nonatomic) NSMutableDictionary actionMap;
- (void)dispatchAction:completion:;
- (void)setActionMap:;
- (id)initWithPageContext:;
- (void)subscribeActionByActionType:target:handler:;
- (void)dispatchActionByActionType:actionContext:completion:;
- (void)dispatchAction:initializeContextWithBlock:completion:;
- (void)dispatchAction:actionContext:completion:;
- (void)dispatchActionByActionType:initializeContextWithBlock:completion:;
- (id)keyForTarget:;
- (void)dispatchActionByActionType:completion:;
- (void)unsubscribeActionByActionType:target:;
- (id)init;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
- (id)actionMap;
@end
