@interface MPModelLibraryImportChangeRequest : NSObject
@property (nonatomic) MPModelObject referralObject;
@property (nonatomic) MPSectionedCollection modelObjects;
@property (nonatomic) BOOL shouldLibraryAdd;
- (id)modelObjects;
- (void)performWithResponseHandler:;
- (id)newOperationWithResponseHandler:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)referralObject;
- (void)setReferralObject:;
- (BOOL)shouldLibraryAdd;
- (void)setShouldLibraryAdd:;
- (void)setModelObjects:;
@end
