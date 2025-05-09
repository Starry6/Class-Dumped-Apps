@interface IESLiveDI : NSObject
@property (nonatomic) <IESLiveDIContext> retainedContext;
@property (nonatomic) IESAppContext realDI;
@property (nonatomic) <IESLiveDI> parentDI;
@property (nonatomic) NSMapTable childrenDIMap;
@property (nonatomic) NSMapTable multicasterMap;
@property (nonatomic) Q type;
@property (nonatomic) <IESLiveDIExteriorDelegate> exteriorDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)checkRegistries;
- (id)initWithRealDI:;
- (id)retainedContext;
- (id)cacheObjectWithProtocol:;
- (id)childrenDIMap;
- (id)exteriorDelegate;
- (id)ieslive_getChildDIforContext:;
- (void)ieslive_removeChildDIForContext:;
- (void)ieslive_setChildDI:forContext:;
- (id)multiUse:forProtocol:;
- (id)multicasterMap;
- (id)objectWithProtocol:;
- (id)parentDI;
- (id)prototypeObjectWithProtocol:;
- (id)realDI;
- (BOOL)removeClass:forProtocol:;
- (BOOL)removeObject:forProtocol:;
- (void)setChildrenDIMap:;
- (void)setExteriorDelegate:;
- (void)setMulticasterMap:;
- (void)setParentDI:;
- (void)setRealDI:;
- (void)setRetainedContext:;
- (id)singletonObjectWithProtocol:;
- (BOOL)use:forProtocol:;
- (BOOL)useClass:forProtocol:;
- (BOOL)useProvider:forProtocol:;
- (void)setUp;
- (id)init;
- (void)dealloc;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
@end
