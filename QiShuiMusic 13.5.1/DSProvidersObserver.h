@interface DSProvidersObserver : NSObject
- (void)setProviders:;
- (id)providers;
- (void)startObserving;
- (void)stopObserving;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)populated;
- (void)collectionSynched;
- (void)blockUntilPopulated;
@end
