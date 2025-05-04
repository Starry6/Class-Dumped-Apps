@interface AWEHPHambCheckerManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) BOOL isLoad;
@property (nonatomic) NSMutableDictionary checkerMap;
- (void)addChecker:;
- (id)p_checkModuleData:;
- (id)checkerMap;
- (void)p_tryLoad;
- (BOOL)isLoad;
- (void)setIsLoad:;
- (id)checkUserSettings:;
- (id)checkDeviceSettings:;
- (void)setCheckerMap:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
@end
