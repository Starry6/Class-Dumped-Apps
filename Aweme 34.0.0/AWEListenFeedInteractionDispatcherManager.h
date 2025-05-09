@interface AWEListenFeedInteractionDispatcherManager : NSObject
@property (nonatomic) NSPointerArray elementArray;
@property (nonatomic) NSMutableArray controllerArray;
@property (nonatomic) NSMutableDictionary cacheDict;
@property (nonatomic) AWEListenFeedInteractionContext interactionContext;
@property (nonatomic) UIViewController<AWEListenFeedInteractionContainerProtocol><AWEListenFeedInteractionViewControllerProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCacheDict:;
- (id)controllerArray;
- (id)controllerArrayBySelector:;
- (id)elementArray;
- (void)setElementArray:;
- (void)setControllerArray:;
- (id)aimControllerArray;
- (id)elementArrayBySelector:;
- (id)arrayForSelectorUsingCache:;
- (void)registerController;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)removeElement:;
- (id)interactionContext;
- (void)setInteractionContext:;
- (id)cacheDict;
- (void)registerElement:;
@end
