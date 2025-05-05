@interface VSCacheUpdateListener : NSObject
- (id)init;
- (void)dealloc;
- (void)_spokenLanguageChanged:;
- (void)startListening;
- (void)stopListening;
- (void)_flush;
- (id)_initShared;
- (void)_enqueueRequest:;
- (void)performUpdateForModelIdentifier:classIdentifier:;
+ (id)sharedListenerIfExists;
+ (id)sharedListener;
@end
