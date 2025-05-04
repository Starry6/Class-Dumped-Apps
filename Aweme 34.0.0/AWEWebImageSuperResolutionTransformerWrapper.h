@interface AWEWebImageSuperResolutionTransformerWrapper : NSObject
@property (nonatomic) BDSuperResolutionTransformer bdTransformer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:;
- (id)transformImageAfterStoreWithImage:;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void)setBdTransformer:;
- (id)bdTransformer;
- (void).cxx_destruct;
- (id)initWithTargetSize:;
@end
