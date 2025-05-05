@interface WBSMobileAssetController : NSObject
@property (nonatomic) <WBSMobileAssetControllerDelegate> delegate;
@property (nonatomic) NSString assetType;
@property (nonatomic) NSString updateDateDefaultsKey;
@property (nonatomic) NSDate lastUpdateDate;
@property (nonatomic) double updateInterval;
- (id)assetType;
- (void)_update;
- (id)lastUpdateDate;
- (double)updateInterval;
- (void)setDelegate:;
- (void)setLastUpdateDate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)queryURL:;
- (id)initWithMobileAssetType:updateDateDefaultsKey:updateInterval:minimumDelay:;
- (id)initWithMobileAssetType:updateInterval:minimumDelay:;
- (void)_updateCatalog:;
- (void)_queryAssets:;
- (void)_queryMostRecentAsset:;
- (void)_downloadIfNecessary:;
- (id)updateDateDefaultsKey;
@end
