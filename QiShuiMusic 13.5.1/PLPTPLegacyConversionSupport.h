@interface PLPTPLegacyConversionSupport : NSObject
@property (nonatomic) BOOL penultimateIsPublic;
@property (nonatomic) BOOL peerSupportsTranscodeChoice;
@property (nonatomic) BOOL peerSupportsAdjustmentBaseResources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)conversionResultForAsset:sourceHints:forceLegacyConversion:assetTypeLabel:;
- (BOOL)penultimateIsPublic;
- (BOOL)peerSupportsTranscodeChoice;
- (BOOL)peerSupportsAdjustmentBaseResources;
@end
