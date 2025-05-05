@interface IESECTabKitComponentManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerDefaultComponentClasses;
- (id)componentArrayBySelector:;
- (Class)componentClassForProtocol:;
- (void)componentDidAppear:;
- (void)componentDidDisappear:;
- (void)componentDidLoad;
- (id)componentForProtocol:;
- (void)componentWillAppear:;
- (void)componentWillDisappear:;
- (void)dispatchDidLoadComponent:;
- (id)initWithDIContext:;
- (void)loadComponentForProtocol:;
- (void)loadComponentForProtocol:forced:;
- (void)loadComponents;
- (void)registerComponentClass:forProtocol:;
- (void)syncComponentLifeCycle:;
- (void).cxx_destruct;
- (id)componentForType:;
@end
