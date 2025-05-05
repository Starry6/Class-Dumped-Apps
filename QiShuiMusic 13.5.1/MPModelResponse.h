@interface MPModelResponse : NSObject
@property (nonatomic) MPPropertySet deferredSectionProperties;
@property (nonatomic) MPPropertySet deferredItemProperties;
@property (nonatomic) MPSectionedCollection results;
@property (nonatomic) BOOL empty;
@property (nonatomic) MPModelRequest request;
@property (nonatomic) BOOL valid;
- (id)initWithRequest:;
- (id)init;
- (BOOL)isEmpty;
- (id)request;
- (id)debugDescription;
- (void)_invalidate;
- (id)results;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (void)setResults:;
- (void)getChangeDetailsFromPreviousResponse:completion:;
- (id)deferredSectionProperties;
- (void)setDeferredSectionProperties:;
- (id)deferredItemProperties;
- (void)setDeferredItemProperties:;
@end
