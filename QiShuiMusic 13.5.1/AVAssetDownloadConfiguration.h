@interface AVAssetDownloadConfiguration : NSObject
@property (nonatomic) NSData artworkData;
@property (nonatomic) AVAssetDownloadContentConfiguration primaryContentConfiguration;
@property (nonatomic) NSArray auxiliaryContentConfigurations;
@property (nonatomic) BOOL optimizesAuxiliaryContentConfigurations;
- (void)setArtworkData:;
- (id)artworkData;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_asset;
- (id)initWithAsset:title:;
- (id)primaryContentConfiguration;
- (id)auxiliaryContentConfigurations;
- (void)setAuxiliaryContentConfigurations:;
- (BOOL)optimizesAuxiliaryContentConfigurations;
- (void)setOptimizesAuxiliaryContentConfigurations:;
- (id)_serializableRepresentation;
+ (BOOL)supportsSecureCoding;
+ (id)downloadConfigurationWithAsset:title:;
@end
