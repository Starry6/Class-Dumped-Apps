@interface ICMusicSubscriptionPlaybackResponseItem : NSObject
@property (nonatomic) NSDate assetExpirationDate;
@property (nonatomic) q storeAdamID;
@property (nonatomic) NSArray fileAssets;
@property (nonatomic) ICStoreHLSAssetInfo hlsAsset;
- (long long)storeAdamID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)fileAssets;
- (id)initWithItemResponseDictionary:urlBag:;
- (id)hlsAsset;
- (id)assetExpirationDate;
- (void)setAssetExpirationDate:;
- (id)fileAssetWithFlavorType:;
@end
