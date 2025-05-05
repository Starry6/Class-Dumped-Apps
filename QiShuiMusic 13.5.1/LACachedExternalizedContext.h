@interface LACachedExternalizedContext : NSObject
@property (nonatomic) NSData cachedExternalizedContext;
@property (nonatomic) NSData externalizedContext;
@property (nonatomic) <LAContextExternalizationObserverProt> externalizationObserver;
- (void)setExternalizationObserver:;
- (id)initWithExternalizedContext:;
- (id)externalizedContext;
- (void)setCachedExternalizedContext:;
- (id)externalizationObserver;
- (void)externalizedContextWithReply:;
- (void).cxx_destruct;
- (id)externalizedContextWithError:;
- (id)cachedExternalizedContext;
- (id)initWithExternalizationDelegate:;
@end
