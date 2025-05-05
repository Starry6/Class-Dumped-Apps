@interface SSURLBag : NSObject
@property (nonatomic) NSDictionary existingBagDictionary;
@property (nonatomic) NSString storeFrontIdentifier;
@property (nonatomic) SSURLBagContext URLBagContext;
- (id)_connection;
- (id)init;
- (void)dealloc;
- (id)URLBagContext;
- (void)loadValueForKey:completionBlock:;
- (id)valueForKey:error:;
- (void)dispatchAsync:;
- (id)initWithURLBagContext:;
- (void)loadWithCompletionBlock:;
- (void)getTrustForURL:completionBlock:;
- (id)existingBagDictionary;
- (id)storeFrontIdentifier;
- (void)dispatchSync:;
- (void)invalidate;
- (void)_drainPendingLookupsWithError:;
- (void)_loadURLBag;
- (void)_loadWithCompletionBlock:;
+ (id)URLBagForContext:;
+ (void)setURLBag:forContext:;
@end
