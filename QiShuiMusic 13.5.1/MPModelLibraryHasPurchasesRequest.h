@interface MPModelLibraryHasPurchasesRequest : NSObject
@property (nonatomic) MPModelObject modelObject;
@property (nonatomic) MPMediaLibrary mediaLibrary;
@property (nonatomic) MPModelKind itemKind;
- (id)mediaLibrary;
- (void)setMediaLibrary:;
- (id)newOperationWithResponseHandler:;
- (id)itemKind;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setModelObject:;
- (id)modelObject;
- (void)setItemKind:;
@end
