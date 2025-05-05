@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation
@property (nonatomic) MPMediaLibraryView libraryView;
@property (nonatomic) # modelClass;
@property (nonatomic) NSArray identifierSets;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (void)setResponseHandler:;
- (void)setLibraryView:;
- (id)identifierSets;
- (Class)modelClass;
- (void)setModelClass:;
- (void)setIdentifierSets:;
- (void).cxx_destruct;
- (id)libraryView;
+ (BOOL)supportsModelClass:;
@end
