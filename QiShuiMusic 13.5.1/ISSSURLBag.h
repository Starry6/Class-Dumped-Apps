@interface ISSSURLBag : SSURLBag
- (void)loadValueForKey:completionBlock:;
- (id)valueForKey:error:;
- (void)_enqueueOperationWithContext:completionBlock:;
- (void)loadWithCompletionBlock:;
- (void)getTrustForURL:completionBlock:;
- (void).cxx_destruct;
- (id)existingBagDictionary;
- (id)storeFrontIdentifier;
- (void)invalidate;
- (void)_finishOperationWithURLBag:error:;
+ (id)URLBagForContext:;
@end
