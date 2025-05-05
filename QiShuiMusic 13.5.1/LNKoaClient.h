@interface LNKoaClient : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSOrderedSet currentVocabularySet;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)queue;
- (void)donateFullVocabularySet:completionHandler:;
- (id)initForBundleIdentifier:;
- (id)buildKVItemListWithIncrementalIDs:;
- (id)getKVItemBuilderFor:itemId:;
- (id)buildKVItemFrom:;
- (void)completeWithError:completion:;
- (void)completeSuccessfully:;
- (id)currentVocabularySet;
- (void)setCurrentVocabularySet:;
@end
