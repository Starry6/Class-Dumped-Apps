@interface MPModelLibraryHasBeenPlayedChangeRequest : NSObject
@property (nonatomic) MPMediaLibrary mediaLibrary;
@property (nonatomic) MPModelObject model;
@property (nonatomic) BOOL hasBeenPlayed;
- (id)model;
- (id)mediaLibrary;
- (void)setMediaLibrary:;
- (id)initWithModel:;
- (id)newOperationWithResponseHandler:;
- (void).cxx_destruct;
- (BOOL)hasBeenPlayed;
- (void)setHasBeenPlayed:;
@end
