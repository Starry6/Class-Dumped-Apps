@interface NSItemProviderRepresentation : NSObject
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) q visibility;
@property (nonatomic) q preferredRepresentation;
- (void)dealloc;
- (void)setVisibility:;
- (long long)visibility;
- (id)typeIdentifier;
- (id)initWithType_v2:preferredRepresentation:loader:;
- (id)initWithType:preferredRepresentation:loader:;
- (id)copyWithDoNothingLoaderBlock;
- (id)performProgressTrackingWithLoaderBlock:onCancelCallback:;
- (id)_loadWithOptions:completionBlock:;
- (id)loadWithOptions_v2:completionHandler:;
- (id)loadWithOptions:completionHandler:;
- (void)setLoaderBlock_v2:;
- (void)setLoaderBlock:;
- (id)loadDataWithOptions_v2:completionHandler:;
- (id)loadDataWithOptions:completionHandler:;
- (id)loadFileCopyWithOptions_v2:completionHandler:;
- (id)loadFileCopyWithOptions:completionHandler:;
- (id)loadOpenInPlaceWithOptions_v2:completionHandler:;
- (id)loadOpenInPlaceWithOptions:completionHandler:;
- (long long)preferredRepresentation;
- (void)setPreferredRepresentation:;
@end
