@interface IESLiveGeneralServiceActionObject : NSObject
@property (nonatomic) NSString actionName;
@property (nonatomic) NSMapTable weakMapTable;
@property (nonatomic) NSMutableDictionary methodMap;
@property (nonatomic) NSLock lock;
- (void)bindActionWithName:;
- (void)buildMethodMapWithProtocol:;
- (void)fallbackUnrecognizedSelector:;
- (id)methodMap;
- (void)setMethodMap:;
- (void)setWeakMapTable:;
- (id)weakMapTable;
- (BOOL)respondsToSelector:;
- (id)init;
- (void)registerService:;
- (id)methodSignatureForSelector:;
- (id)lock;
- (void)setActionName:;
- (void).cxx_destruct;
- (id)actionName;
- (void)forwardInvocation:;
- (void)setLock:;
@end
