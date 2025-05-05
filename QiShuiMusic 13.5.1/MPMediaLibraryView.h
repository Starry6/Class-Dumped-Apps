@interface MPMediaLibraryView : NSObject
@property (nonatomic) {shared_ptr<mlcore::DeviceLibraryView>=^{DeviceLibraryView}^{__shared_weak_count}} mlCoreView;
@property (nonatomic) MPMediaLibrary library;
@property (nonatomic) Q filteringOptions;
- (id)mlCoreView;
- (unsigned long long)filteringOptions;
- (void)performCoreQuery:withCompletion:;
- (id)library;
- (void)performCoreSearchQuery:withCompletion:;
- (void).cxx_destruct;
- (id)initWithLibrary:filteringOptions:;
- (id)_performCoreQuery:error:;
- (id).cxx_construct;
- (BOOL)hasEntitiesForModelKind:;
- (id)copyWithZone:;
@end
