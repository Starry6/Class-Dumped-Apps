@interface AWEPadSplitControllerManager : NSObject
@property (nonatomic) NSMutableDictionary controllerInstanceDict;
@property (nonatomic) NSMutableArray controllerInstance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)controllerByProtocol:;
- (id)classNameArray;
- (id)controllersByProtocol:;
- (void)removeAllControllers;
- (id)controllerInstance;
- (id)protocolKeyByProtocol:;
- (id)controllerInstanceDict;
- (void)removeController:forProtocol:;
- (void)loadControllersWithService:;
- (void)setControllerInstanceDict:;
- (void)setControllerInstance:;
- (void)addController:;
- (id)init;
- (void).cxx_destruct;
@end
