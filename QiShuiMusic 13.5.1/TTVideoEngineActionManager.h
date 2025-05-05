@interface TTVideoEngineActionManager : NSObject
@property (nonatomic) NSMapTable objRegisterDic;
@property (nonatomic) NSMapTable classRegisterDic;
@property (nonatomic) NSMapTable multObjRegisterDic;
@property (nonatomic) NSLock multiDicLock;
- (Class)actionClassWithProtocal:;
- (id)actionObjWithProtocal:;
- (id)actionObjWithProtocal:engine:;
- (id)classRegisterDic;
- (id)multObjRegisterDic;
- (id)multiDicLock;
- (id)objRegisterDic;
- (void)registerActionClass:forProtocol:;
- (void)registerActionObj:forEngine:forProtocol:;
- (void)registerActionObj:forProtocol:;
- (void)removeActionClass:forProtocol:;
- (void)removeActionForengine:;
- (void)removeActionObj:forProtocol:;
- (void)setClassRegisterDic:;
- (void)setMultObjRegisterDic:;
- (void)setMultiDicLock:;
- (void)setObjRegisterDic:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
