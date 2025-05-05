@interface ABUMediaSlotConfigExt : NSProxy
@property (nonatomic) ABUMediaSlotConfig config;
@property (nonatomic) NSString adm;
@property (nonatomic) NSString aid;
@property (nonatomic) @ extraData;
- (BOOL)respondsToSelector:;
- (id)initWithConfig:;
- (BOOL)isMemberOfClass:;
- (id)methodSignatureForSelector:;
- (unsigned long long)hash;
- (id)debugDescription;
- (BOOL)conformsToProtocol:;
- (Class)superclass;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (Class)class;
- (id)description;
- (id)forwardingTargetForSelector:;
- (id)config;
- (void)forwardInvocation:;
- (BOOL)isEqual:;
- (void)setExtraData:;
- (id)extraData;
- (void)setAid:;
- (id)aid;
- (id)adm;
- (void)setAdm:;
@end
