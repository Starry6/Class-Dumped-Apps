@interface MPModelLibrarySearchEntityResultContainer : NSObject
@property (nonatomic) {shared_ptr<mlcore::EntityQueryResult>=^{EntityQueryResult}^{__shared_weak_count}} entityQueryResult;
@property (nonatomic) MPModelLibrarySearchScope scope;
@property (nonatomic) MPMediaLibraryEntityTranslationContext entityTranslationContext;
- (id)scope;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEntityQueryResult:forScope:entityTranslationContext:;
- (id)entityQueryResult;
- (id)entityTranslationContext;
@end
