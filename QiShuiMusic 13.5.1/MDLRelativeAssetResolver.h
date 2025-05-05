@interface MDLRelativeAssetResolver : NSObject
@property (nonatomic) MDLAsset asset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAsset:;
- (id)asset;
- (void).cxx_destruct;
- (void)setAsset:;
- (BOOL)canResolveAssetNamed:;
- (id)resolveAssetNamed:;
@end
