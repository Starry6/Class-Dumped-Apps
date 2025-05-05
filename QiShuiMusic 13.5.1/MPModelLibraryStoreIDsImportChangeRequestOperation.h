@interface MPModelLibraryStoreIDsImportChangeRequestOperation : MPAsyncOperation
@property (nonatomic) MPMediaLibrary mediaLibrary;
@property (nonatomic) MPModelObject referralObject;
@property (nonatomic) NSArray storeIDs;
@property (nonatomic) BOOL shouldLibraryAdd;
@property (nonatomic) @? responseHandler;
- (void)execute;
- (id)responseHandler;
- (id)mediaLibrary;
- (void)setResponseHandler:;
- (void)setMediaLibrary:;
- (void)setStoreIDs:;
- (void).cxx_destruct;
- (id)storeIDs;
- (id)referralObject;
- (void)setReferralObject:;
- (BOOL)shouldLibraryAdd;
- (void)setShouldLibraryAdd:;
@end
