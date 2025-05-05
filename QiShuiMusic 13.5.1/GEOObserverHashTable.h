@interface GEOObserverHashTable : NSObject
@property (nonatomic) BOOL hasObservers;
@property (nonatomic) NSArray allObservers;
- (BOOL)hasObservers;
- (void)registerObserver:queue:;
- (id)init;
- (id)methodSignatureForSelector:;
- (id)allObservers;
- (void)enumerateObserversWithGroup:visitor:;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (void)unregisterObserver:;
- (id)initWithProtocol:queue:;
- (void)registerObserver:;
@end
