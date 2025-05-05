@interface IESECDIAdapterManager : NSObject
@property (nonatomic) NSMapTable serviceImpHashMap;
- (Class)classForAdapter:;
- (Class)classForAdapter:target:;
- (id)hashMapForProtocol:;
- (id)impForProtocol:inTarget:;
- (void)loadAdapterDyldStruct;
- (id)objectForAdapter:;
- (id)objectForAdapter:target:;
- (BOOL)parseAdapterStructInMatchOWithHeader:;
- (void)registerProtocol:WithImp:forTarget:;
- (id)serviceImpHashMap;
- (void)setServiceImpHashMap:;
- (id)usedTargetFor:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
