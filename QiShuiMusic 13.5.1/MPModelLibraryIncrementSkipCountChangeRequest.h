@interface MPModelLibraryIncrementSkipCountChangeRequest : NSObject
@property (nonatomic) MPMediaLibrary mediaLibrary;
@property (nonatomic) MPModelObject model;
- (id)model;
- (id)mediaLibrary;
- (void)setMediaLibrary:;
- (id)initWithModel:;
- (id)newOperationWithResponseHandler:;
- (void).cxx_destruct;
@end
