@interface CNAsynchronousCacheEntryDelegateObservable : CNObservable
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (id)init;
- (id)subscribe:;
- (void).cxx_destruct;
- (void)cacheEntryDidUpdateValue:;
@end
