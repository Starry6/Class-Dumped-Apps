@interface MPModelLibraryRequestOperation : MPAsyncOperation
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) NSOperationQueue serialAccessQueue;
@property (nonatomic) MPModelLibraryRequest request;
@property (nonatomic) @? responseHandler;
- (id)serialAccessQueue;
- (void)execute;
- (void)_executeRequest;
- (id)responseHandler;
- (id)_sectionProperties;
- (void)setResponseHandler:;
- (id)_itemProperties;
- (id)operationQueue;
- (void)_sanityCheckRequest;
- (id)request;
- (void)setSerialAccessQueue:;
- (id)_libraryView;
- (void).cxx_destruct;
- (void)_executeLegacyRequest;
- (void)setRequest:;
- (void)_insertPropertyCacheForEntityPID:entityClass:entityTranslator:translationContext:propertyCachesVector:;
- (void)setOperationQueue:;
@end
