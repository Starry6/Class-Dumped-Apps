@interface AWEWebImageSharpTransformerWrapper : NSObject
@property (nonatomic) BDSharpTransformer bdTransformer;
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
- (id)initWithConfig:;
- (void).cxx_destruct;
@end
